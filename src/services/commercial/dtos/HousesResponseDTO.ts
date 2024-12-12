export interface HousesResponseDTO {
  Type: number;
  Message: string;
  Promoted?: null[] | null;
  Data: NewDataResponse[];
  RateLimit: Object;
  HasWarning: boolean;
}

export interface NewDataResponse {
  id: number;
  no: string;
  street: number;
  type: string;
}

export interface SourceInfo {
  name: string;
  img: string;
  lang: string;
}
