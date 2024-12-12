import { HousesResult } from '../../../models';
import { NewDataResponse } from '../../dtos/HousesResponseDTO';

export class getHousesCommercialResponseAdapter {
  constructor() {}

  service(dto: NewDataResponse[]): HousesResult[] {
    return dto.map((item: NewDataResponse) => {
      return {
        id: item.id,
        no: item.no,
        street: item.street,
        type: item.type,
      };
    });
  }
}
