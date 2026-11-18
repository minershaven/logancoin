import { inject, Injectable } from '@angular/core';
import { HttpClient } from '@angular/common/http';
import { Observable, of } from 'rxjs';
import { WrapInfo } from '@api/models/wrap-info';
import { PriceInfo, VerifiedAssetInfoWhitelist } from '@api/models/assets.model';
import { catchError, map } from 'rxjs/operators';

@Injectable({
    providedIn: 'root',
})
export class ApiService {
    private _httpClient = inject(HttpClient);

    getWrapInfo(): Observable<WrapInfo> {
        // Logan Coin: the Zano ERC20 bridge does not apply; no wrap service.
        return of(null);
    }

    getVerifiedAssetInfoWhitelist(type: 'mainnet' | 'testnet'): Observable<{
        assets: VerifiedAssetInfoWhitelist;
        signature: string;
    }> {
        // Logan Coin: no curated asset whitelist yet (Zano's list is for the Zano chain).
        return of({ assets: [] as unknown as VerifiedAssetInfoWhitelist, signature: '' });
    }

    getCurrentPriceForAsset(asset_id: string): Observable<PriceInfo & { asset_id: string }> {
        // Logan Coin: no price feed yet. Never ask Zano's explorer: LGN shares Zano's native asset id,
        // so it would show Zano's price as if it were LGN's.
        return of({ success: false, data: 'Asset not found', asset_id } as PriceInfo & { asset_id: string });
    }
}
