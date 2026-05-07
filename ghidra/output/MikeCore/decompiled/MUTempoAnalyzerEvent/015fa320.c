// Function: FUN_015fa320
// Address: 015fa320
// Size: 979 bytes
// Class: MUTempoAnalyzerEvent


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_015fa320(float param_1,longlong *param_2,longlong *param_3)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  char cVar4;
  undefined8 *puVar5;
  char *pcVar6;
  char in_CL;
  longlong lVar7;
  longlong unaff_RSI;
  undefined8 *unaff_RDI;
  bool bVar8;
  bool bVar9;
  longlong local_50;
  char local_48 [8];
  char local_40 [8];
  char local_38 [8];
  
  puVar5 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar5 = &DAT_02572358;
  (*DAT_02572370)();
  if (unaff_RSI != 0) {
    FUN_00d50b00();
  }
  do {
    if (*(int *)(*(longlong *)(unaff_RSI + 0x10) + 0xc) < 2) {
LAB_015fa6ea:
      *unaff_RDI = puVar5;
      *(undefined1 *)(unaff_RDI + 1) = 1;
      FUN_00d50b20();
      return unaff_RDI;
    }
    FUN_00d23340();
    local_38[0] = local_48[0];
    pcVar6 = local_48;
    if (local_48[0] == '\0') {
      pcVar6 = local_38;
    }
    *pcVar6 = '\0';
    if ((local_48[0] != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if (*(longlong *)(local_50 + 0x78) == 0) {
      bVar8 = false;
    }
    else {
      FUN_00d23340();
      local_40[0] = local_48[0];
      pcVar6 = local_48;
      if (local_48[0] == '\0') {
        pcVar6 = local_40;
      }
      *pcVar6 = '\0';
      if ((local_48[0] != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
      bVar8 = *(longlong *)(*(longlong *)(local_50 + 0x78) + 0x10) != 0;
      if ((local_40[0] != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
    }
    if ((local_38[0] != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if (!bVar8) goto LAB_015fa6ea;
    FUN_00d23340();
    local_38[0] = local_48[0];
    pcVar6 = local_48;
    if (local_48[0] == '\0') {
      pcVar6 = local_38;
    }
    *pcVar6 = '\0';
    if ((local_48[0] != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    iVar1 = *(int *)(*(longlong *)(local_50 + 0x78) + 0xc);
    if (local_38[0] != '\0') {
      FUN_00d50b20();
    }
    bVar8 = true;
    if (iVar1 != 3) {
      lVar3 = *param_2;
      if ((lVar3 == 0) || ((int)*(uint *)(lVar3 + 0x18) < 4)) {
        bVar8 = false;
      }
      else {
        lVar7 = 0;
        do {
          bVar8 = iVar1 == *(int *)(*(longlong *)(lVar3 + 0x10) + lVar7 * 4);
          if (bVar8) break;
          bVar9 = (ulonglong)(*(uint *)(lVar3 + 0x18) >> 2) - 1 != lVar7;
          lVar7 = lVar7 + 1;
        } while (bVar9);
      }
    }
    FUN_00d23340();
    local_38[0] = local_48[0];
    pcVar6 = local_48;
    if (local_48[0] == '\0') {
      pcVar6 = local_38;
    }
    *pcVar6 = '\0';
    if ((local_48[0] != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    iVar2 = *(int *)(*(longlong *)(*(longlong *)(*(longlong *)(local_50 + 0x78) + 0x10) + 0x78) +
                    0xc);
    if (local_38[0] != '\0') {
      FUN_00d50b20();
    }
    if (!(bool)(bVar8 & iVar2 == iVar1)) goto LAB_015fa6ea;
    FUN_00d23340();
    local_38[0] = local_48[0];
    pcVar6 = local_48;
    if (local_48[0] == '\0') {
      pcVar6 = local_38;
    }
    *pcVar6 = '\0';
    if ((local_48[0] != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    lVar3 = *(longlong *)(*(longlong *)(*(longlong *)(local_50 + 0x78) + 0x10) + 0x80);
    if (lVar3 != 0) {
      FUN_00d50b00();
    }
    if (local_38[0] != '\0') {
      FUN_00d50b20();
    }
    if ((((param_1 != DAT_0239424c) || (NAN(param_1) || NAN(DAT_0239424c))) && (lVar3 != 0)) &&
       (param_1 < (float)((uint)(*(float *)(unaff_RSI + 0x2c) - *(float *)(lVar3 + 0x2c)) &
                         _DAT_02390140))) {
      FUN_00d50b20();
      goto LAB_015fa6ea;
    }
    if (lVar3 == 0) goto LAB_015fa6ea;
    if (*(int *)(*(longlong *)(lVar3 + 0x10) + 0xc) < 2) {
      FUN_00d50b20();
      goto LAB_015fa6ea;
    }
    if (*param_3 == 0) {
      cVar4 = in_CL;
      if (*(char *)(lVar3 + 0x50) == '\0') goto joined_r0x015fa67b;
    }
    else {
      local_48[0] = '\0';
      cVar4 = FUN_00d24090();
      if ((local_48[0] != '\0') && (lVar3 != 0)) {
        FUN_00d50b20();
      }
joined_r0x015fa67b:
      if (cVar4 == '\0') {
        FUN_00d50b20();
        goto LAB_015fa6ea;
      }
    }
    if (lVar3 != unaff_RSI) {
      FUN_00d50b00();
      FUN_00d50b20();
      unaff_RSI = lVar3;
    }
    local_48[0] = '\0';
    FUN_00d21140();
    if ((local_48[0] != '\0') && (unaff_RSI != 0)) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
    local_50 = unaff_RSI;
  } while( true );
}


