// Function: FUN_018068b0
// Address: 018068b0
// Size: 703 bytes
// Class: MUPitchMapper


uint FUN_018068b0(longlong *param_1,uint param_2,longlong *param_3,longlong *param_4)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  bool bVar7;
  int iVar8;
  uint unaff_ESI;
  int local_res8;
  char local_res10;
  
  if ((int)param_2 < 0x28) {
    iVar3 = FUN_01716a70();
    if (iVar3 == 0) {
      return 1;
    }
  }
  else {
    if (0x34 < (int)param_2) {
      if ((int)param_2 < 0x40) {
        if (local_res8 != 1) {
          return unaff_ESI & 0x15;
        }
        return unaff_ESI & 0x55;
      }
      iVar3 = FUN_0171a210();
      if (iVar3 != -1) {
        iVar3 = FUN_0171a210();
        uVar4 = (iVar3 % 7 >> 0x1f & 7U) + iVar3 % 7;
        if ((uVar4 < 5) && ((0x15U >> (uVar4 & 0x1f) & 1) != 0)) {
          return unaff_ESI;
        }
      }
      uVar4 = FUN_017154c0();
      if (uVar4 == param_2 % 0xc) {
        return unaff_ESI;
      }
      cVar2 = FUN_01716980();
      if (cVar2 == '\0') {
        return 0x15;
      }
      return unaff_ESI;
    }
    iVar3 = FUN_01716a70();
    if (iVar3 == 0) {
      if (*param_4 == 0) {
        bVar7 = false;
      }
      else {
        FUN_01715480();
        uVar4 = FUN_0171a210();
        cVar2 = FUN_01716be0();
        if (cVar2 == '\0') {
          bVar7 = (uVar4 & 0xfffffffd) == 0;
        }
        else {
          bVar7 = uVar4 == 0 || uVar4 == 5;
        }
      }
      iVar3 = FUN_0171a210();
      if (iVar3 == -1) {
        iVar3 = -1;
        lVar1 = *param_3;
      }
      else {
        iVar3 = FUN_0171a210();
        iVar3 = (iVar3 % 7 >> 0x1f & 7U) + iVar3 % 7;
        lVar1 = *param_3;
      }
      if (lVar1 == 0) {
        bVar7 = true;
      }
      else {
        iVar5 = FUN_01715480();
        iVar5 = (uint)(byte)((char)param_2 + ((byte)((param_2 & 0xff) / 3) & 0xfc) * -3) - iVar5;
        iVar8 = -iVar5;
        if (0 < iVar5) {
          iVar8 = iVar5;
        }
        iVar8 = 6 - iVar8;
        iVar5 = -iVar8;
        if (0 < iVar8) {
          iVar5 = iVar8;
        }
        iVar5 = iVar5 + -6;
        iVar8 = -iVar5;
        if (0 < iVar5) {
          iVar8 = iVar5;
        }
        bVar7 = (bool)(iVar8 != 1 | bVar7);
      }
      iVar8 = FUN_01715480();
      uVar4 = 1;
      if (!bVar7) {
        iVar8 = param_2 - iVar8;
        iVar8 = iVar8 + (((uint)(iVar8 / 6 + (iVar8 >> 0x1f)) >> 1) - (iVar8 >> 0x1f)) * -0xc;
        uVar6 = (uint)(iVar3 == 2) * 4 + 1;
        uVar4 = 0x11;
        if ((iVar8 >> 0x1f & 0xcU) + iVar8 != 7 || iVar3 != 4) {
          uVar4 = uVar6;
        }
        if (local_res10 == '\0') {
          uVar4 = uVar6;
        }
      }
      return unaff_ESI & uVar4;
    }
  }
  lVar1 = *param_1;
  cVar2 = FUN_01716a70();
  return 1 << ((byte)(*(ulonglong *)(lVar1 + 0x18) >> (cVar2 * '\x04' & 0x3fU)) & 0xf);
}


