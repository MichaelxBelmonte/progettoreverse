// Function: FUN_017c4570
// Address: 017c4570
// Size: 1641 bytes
// Class: GNFraction


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_017c4570(double param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  char cVar4;
  int iVar5;
  ulonglong uVar6;
  ulonglong unaff_RSI;
  longlong unaff_RDI;
  float fVar7;
  undefined1 auVar8 [16];
  undefined8 local_88;
  
  if ((*(float *)(unaff_RDI + 0x58) == 0.0) && (!NAN(*(float *)(unaff_RDI + 0x58)))) {
    return param_1;
  }
  cVar4 = FUN_00e7c7f0();
  if (cVar4 == '\0') {
    return param_1;
  }
  cVar4 = FUN_00e7c7f0();
  if (cVar4 != '\0') {
    FUN_00e7b970();
    FUN_00e7c2a0();
    FUN_00e7bdc0();
    if ((unaff_RSI & 0xffffffff00000000) == 0x100000000) {
      fVar7 = *(float *)(unaff_RDI + 0x58);
      dVar1 = (double)FUN_00e7c860();
      dVar1 = (dVar1 * (double)fVar7) / DAT_023b3bc0;
      goto LAB_017c4bbd;
    }
  }
  FUN_00e7c3c0();
  FUN_00e7b820();
  cVar4 = FUN_00e7c7f0();
  if (cVar4 != '\0') {
    FUN_00e7b970();
    FUN_00e7c2a0();
    FUN_00e7bdc0();
    if ((unaff_RSI & 0xffffffff00000000) == 0x100000000) {
      fVar7 = *(float *)(unaff_RDI + 0x58);
      if (DAT_02390124 <= fVar7) {
        local_88 = FUN_00e7c860();
        fVar7 = *(float *)(unaff_RDI + 0x58) + DAT_02390d00;
        dVar1 = (double)FUN_00e7c860();
        auVar8._8_8_ = dVar1 * (double)fVar7;
        auVar8._0_8_ = local_88;
        auVar8 = divpd(auVar8,_DAT_02415ec0);
        dVar1 = auVar8._8_8_ + auVar8._0_8_;
      }
      else {
        dVar1 = (double)FUN_00e7c860();
        dVar1 = (dVar1 * (double)fVar7) / DAT_02423860;
      }
LAB_017c4bbd:
      return param_1 + dVar1;
    }
  }
  iVar5 = (int)(unaff_RSI >> 0x20);
  if (iVar5 * -0x55555555 + 0x2aaaaaaaU < 0x55555555) {
    return param_1;
  }
  if (iVar5 <= *(int *)(unaff_RDI + 0x54)) {
    return param_1;
  }
  FUN_00e7c3c0();
  FUN_00e7c860();
  uVar6 = FUN_00e7cd00();
  cVar4 = FUN_00e7c7f0();
  if (cVar4 == '\0') {
LAB_017c4854:
    FUN_00e7c3c0();
    FUN_00e7b820();
    cVar4 = FUN_00e7c7f0();
    if (cVar4 != '\0') {
      FUN_00e7b970();
      FUN_00e7c2a0();
      FUN_00e7bdc0();
      if ((uVar6 & 0xffffffff00000000) == 0x100000000) goto LAB_017c4933;
    }
    FUN_00e7c860();
    FUN_00e7cd00();
  }
  else {
    FUN_00e7b970();
    FUN_00e7c2a0();
    FUN_00e7bdc0();
    if ((uVar6 & 0xffffffff00000000) != 0x100000000) goto LAB_017c4854;
  }
LAB_017c4933:
  FUN_00e7c3c0();
  FUN_00e7c860();
  uVar6 = FUN_00e7cd00();
  cVar4 = FUN_00e7c7f0();
  if (cVar4 != '\0') {
    FUN_00e7b970();
    FUN_00e7c2a0();
    FUN_00e7bdc0();
    if ((uVar6 & 0xffffffff00000000) == 0x100000000) goto LAB_017c4adb;
  }
  FUN_00e7c3c0();
  FUN_00e7b820();
  cVar4 = FUN_00e7c7f0();
  if (cVar4 != '\0') {
    FUN_00e7b970();
    FUN_00e7c2a0();
    FUN_00e7bdc0();
    if ((uVar6 & 0xffffffff00000000) == 0x100000000) goto LAB_017c4adb;
  }
  FUN_00e7c860();
  FUN_00e7cd00();
LAB_017c4adb:
  dVar1 = (double)FUN_017c4570(0);
  dVar2 = (double)FUN_017c4570(0);
  FUN_00e7b970();
  FUN_00e7b970();
  FUN_00e7bdc0();
  dVar3 = (double)FUN_00e7c860();
  return dVar3 * (dVar2 - dVar1) + dVar1;
}


