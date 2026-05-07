// Function: FUN_00791550
// Address: 00791550
// Size: 1518 bytes
// Class: MUElementAnalyzer
// String references:
//   "MUElementAnalyzer"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_00791550(pthread_key_t param_1,undefined8 *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  void *pvVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *unaff_RSI;
  longlong **pplVar9;
  longlong lVar10;
  ulonglong uVar11;
  undefined4 uVar12;
  longlong local_a8;
  char local_a0;
  longlong local_98;
  char local_90;
  longlong *local_88;
  longlong *local_80;
  char local_78;
  longlong *local_70;
  char local_68;
  longlong *local_60;
  undefined8 local_58;
  undefined4 local_50;
  longlong *local_48;
  char local_40 [8];
  char local_38 [8];
  
  uVar12 = FUN_00e33de0();
  local_98 = DAT_0270b920;
  if (DAT_0270b920 != 0) {
    uVar12 = FUN_00d50b00();
  }
  local_90 = '\x01';
  pplVar9 = &local_70;
  FUN_000175c0(uVar12,&local_98);
  plVar8 = local_70;
  FUN_0006e1c0();
  if (plVar8 == (longlong *)0x0) {
LAB_007915db:
    pplVar9 = (longlong **)&DAT_02802688;
  }
  else {
    (**(code **)(*plVar8 + 0x360))();
    cVar3 = FUN_00e85ea0();
    if (cVar3 == '\0') goto LAB_007915db;
  }
  plVar8 = *pplVar9;
  if (*(char *)(pplVar9 + 1) == '\0') {
    if (plVar8 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(undefined1 *)(pplVar9 + 1) = 0;
  }
  if ((local_68 != '\0') && (local_70 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_90 != '\0') && (local_98 != 0)) {
    FUN_00d50b20();
  }
  if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar8 != (longlong *)0x0) {
    (**(code **)(*(longlong *)*param_2 + 0x988))();
    pvVar6 = _pthread_getspecific(param_1);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01266fe0();
    plVar8 = local_80;
    if (local_78 == '\0') {
      if (local_80 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_78 = '\0';
    }
    local_70 = plVar8;
    local_68 = '\0';
    uVar4 = FUN_00d23d70();
    uVar11 = (ulonglong)uVar4;
    if ((local_68 != '\0') && (local_70 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar8 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    if ((local_78 != '\0') && (local_80 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
    goto LAB_007917d5;
  }
  plVar8 = (longlong *)*unaff_RSI;
  if ((DAT_026e0c38 == '\0') && (iVar5 = ___cxa_guard_acquire(), iVar5 != 0)) {
    _DAT_026e0b88 = FUN_000fddb0();
    _DAT_026e0b70 = "MUElementAnalyzer";
    _DAT_026e0b78 = 0x180;
    _DAT_026e0b80 = FUN_000fdd80;
    _DAT_026e0b90 = 0;
    uRam00000000026e0b98 = 0;
    _DAT_026e0ba0 = 0;
    _DAT_026e0c18 = 0;
    uRam00000000026e0c20 = 0;
    _DAT_026e0c28 = 0;
    DAT_026e0c2a = 1;
    _DAT_026e0ba8 = 0;
    uRam00000000026e0bb0 = 0;
    _DAT_026e0bb8 = 0;
    uRam00000000026e0bc0 = 0;
    _DAT_026e0bc8 = 0;
    uRam00000000026e0bd0 = 0;
    _DAT_026e0bd8 = 0;
    uRam00000000026e0be0 = 0;
    _DAT_026e0be8 = 0;
    uRam00000000026e0bf0 = 0;
    _DAT_026e0bf8 = 0;
    uRam00000000026e0c00 = 0;
    _DAT_026e0c08 = 0;
    uRam00000000026e0c10 = 0;
    DAT_026e0c33 = 0;
    _DAT_026e0c2b = 0;
    ___cxa_guard_release();
  }
  if (plVar8 == (longlong *)0x0) {
LAB_007916e8:
    unaff_RSI = &DAT_02802688;
  }
  else {
    (**(code **)(*plVar8 + 0x360))();
    cVar3 = FUN_00e85ea0();
    if (cVar3 == '\0') goto LAB_007916e8;
  }
  if (*unaff_RSI == 0) {
    uVar11 = 0;
    goto LAB_007917d5;
  }
  FUN_013fb420();
  plVar8 = local_70;
  if ((((local_68 == '\0') && (local_70 != (longlong *)0x0)) && (FUN_00d50b00(), local_68 != '\0'))
     && (local_70 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  local_88 = plVar8;
  (**(code **)(*(longlong *)*param_2 + 0x988))();
  plVar1 = local_70;
  if (local_68 == '\0') {
    if (local_70 == (longlong *)0x0) goto LAB_00791a59;
    FUN_00d50b00();
    if ((local_68 != '\0') && (local_70 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
LAB_00791811:
    local_68 = '\0';
    local_70 = (longlong *)0x0;
    local_60 = plVar1;
    local_50 = 0;
    local_58 = 0;
    if (0 < *(int *)((longlong)plVar1 + 0xc)) {
      lVar10 = 0;
      do {
        local_70 = *(longlong **)(plVar1[2] + lVar10 * 8);
        pvVar6 = _pthread_getspecific((pthread_key_t)unaff_RSI);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012e5ae0();
        iVar5 = *(int *)((longlong)local_48 + 0xc);
        if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if ((iVar5 == 1) && (local_88 != (longlong *)0x0)) {
          pvVar6 = _pthread_getspecific((pthread_key_t)unaff_RSI);
          if (pvVar6 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_012e5ae0();
          FUN_00d23310();
          plVar8 = local_48;
          local_38[0] = local_40[0];
          unaff_RSI = (longlong *)local_38;
          plVar7 = (longlong *)local_40;
          if (local_40[0] == '\0') {
            plVar7 = unaff_RSI;
          }
          *(undefined1 *)plVar7 = 0;
          if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          pvVar6 = _pthread_getspecific((pthread_key_t)unaff_RSI);
          if (pvVar6 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0126ef70();
          pvVar6 = _pthread_getspecific((pthread_key_t)unaff_RSI);
          if (pvVar6 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_01320d00();
          plVar2 = local_48;
          plVar7 = local_80;
          if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_78 != '\0') && (local_80 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_38[0] != '\0') && (plVar8 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_a0 != '\0') && (local_a8 != 0)) {
            FUN_00d50b20();
          }
          plVar8 = local_88;
          if (plVar7 == plVar2) {
            FUN_000be170();
            uVar11 = CONCAT71((int7)((ulonglong)lVar10 >> 8),1);
            goto LAB_00791a6a;
          }
        }
        lVar10 = lVar10 + 1;
        local_58 = CONCAT44(local_58._4_4_,(int)lVar10);
        plVar8 = local_88;
      } while ((int)lVar10 < *(int *)((longlong)plVar1 + 0xc));
    }
    FUN_000be170();
    uVar11 = 0;
LAB_00791a6a:
    FUN_00d50b20();
  }
  else {
    if (local_70 != (longlong *)0x0) goto LAB_00791811;
LAB_00791a59:
    uVar11 = 0;
  }
  if (plVar8 != (longlong *)0x0) {
    FUN_00d50b20();
  }
LAB_007917d5:
  return uVar11 & 0xffffffff;
}


