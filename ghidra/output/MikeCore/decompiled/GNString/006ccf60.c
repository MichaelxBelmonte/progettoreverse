// Function: FUN_006ccf60
// Address: 006ccf60
// Size: 2162 bytes
// Class: GNString


/* WARNING: Removing unreachable block (ram,0x006cd72e) */
/* WARNING: Removing unreachable block (ram,0x006cd73e) */
/* WARNING: Removing unreachable block (ram,0x006cd131) */
/* WARNING: Removing unreachable block (ram,0x006cd125) */
/* WARNING: Removing unreachable block (ram,0x006cd174) */
/* WARNING: Removing unreachable block (ram,0x006cd180) */
/* WARNING: Removing unreachable block (ram,0x006cd7a8) */
/* WARNING: Removing unreachable block (ram,0x006cd7b4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006ccf60(void)

{
  longlong lVar1;
  longlong lVar2;
  byte bVar3;
  int iVar4;
  longlong *plVar5;
  ulonglong uVar6;
  void *pvVar7;
  longlong lVar8;
  undefined8 uVar9;
  double dVar10;
  undefined8 uVar11;
  longlong local_e0;
  char local_d8;
  longlong local_d0;
  char local_c8;
  longlong local_c0;
  char local_b8;
  longlong local_b0;
  char local_a8;
  longlong local_a0;
  longlong local_98;
  char local_90;
  longlong local_88;
  char local_80;
  longlong local_78;
  char local_70;
  longlong local_68;
  undefined8 local_60;
  undefined4 local_58;
  longlong local_50;
  char local_48;
  longlong local_40;
  longlong *local_38;
  
  plVar5 = (longlong *)FUN_00e8fc40();
  FUN_001d7da0();
  (**(code **)(*plVar5 + 0x18))();
  lVar8 = DAT_026e3b28;
  if (DAT_026e3b28 != 0) {
    FUN_00d50b00();
  }
  uVar9 = FUN_00d8ede0();
  local_e0 = local_50;
  local_d8 = 0;
  if (local_48 == '\0') {
    if (local_50 != 0) {
      uVar9 = FUN_00d50b00();
    }
  }
  else {
    local_48 = '\0';
  }
  local_d8 = '\x01';
  FUN_01d64ce0(uVar9,&local_e0);
  local_40 = local_78;
  if (local_70 == '\0') {
    if (((local_78 != 0) && (FUN_00d50b00(), local_70 != '\0')) && (local_78 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_70 = '\0';
  }
  if ((local_d8 != '\0') && (local_e0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  if (lVar8 != 0) {
    FUN_00d50b20();
  }
  FUN_01d66da0();
  FUN_00ca1170();
  if ((local_70 != '\0') && (local_78 != 0)) {
    FUN_00d50b20();
  }
  uVar9 = FUN_01d66da0();
  lVar8 = DAT_02726cf0;
  if (DAT_02726cf0 != 0) {
    uVar9 = FUN_00d50b00();
  }
  local_78 = lVar8;
  local_70 = '\0';
  FUN_00ca0840(uVar9,&local_78);
  if ((local_70 != '\0') && (local_78 != 0)) {
    FUN_00d50b20();
  }
  if (lVar8 != 0) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  FUN_01d5d8d0();
  lVar8 = DAT_02726cf8;
  if (DAT_02726cf8 != 0) {
    FUN_00d50b00();
  }
  dVar10 = (double)FUN_00e7d6f0();
  uVar6 = (ulonglong)(dVar10 * DAT_023907c0);
  dVar10 = dVar10 * DAT_023907c0 - _DAT_023907c8;
  uVar9 = 0xaaaaaaaaaaaaaaab;
  uVar11 = FUN_0071a120();
  if ((((local_70 == '\0') && (local_78 != 0)) && (uVar11 = FUN_00d50b00(), local_70 != '\0')) &&
     (local_78 != 0)) {
    uVar11 = FUN_00d50b20();
  }
  bVar3 = (byte)(((longlong)dVar10 & (longlong)uVar6 >> 0x3f | uVar6) / 3);
  local_50 = lVar8;
  local_48 = '\0';
  FUN_000175c0(uVar11,&local_50);
  lVar2 = local_78;
  if (local_70 == '\0') {
    if (((local_78 != 0) && (FUN_00d50b00(), local_70 != '\0')) && (local_78 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_70 = '\0';
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  if (lVar2 != 0) {
    local_70 = '\0';
    local_78 = lVar2;
    bVar3 = FUN_00c70bc0();
    if ((local_70 != '\0') && (local_78 != 0)) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  FUN_00d50b20();
  if (lVar8 != 0) {
    FUN_00d50b20();
  }
  FUN_0141b540();
  local_a0 = local_78;
  if (local_70 == '\0') {
    if (local_78 == 0) goto LAB_006cd777;
    FUN_00d50b00();
    if ((local_70 != '\0') && (local_78 != 0)) {
      FUN_00d50b20();
    }
  }
  else if (local_78 == 0) goto LAB_006cd777;
  local_70 = '\0';
  local_78 = 0;
  local_58 = 0;
  local_60 = 0;
  local_68 = local_a0;
  local_38 = plVar5;
  if (0 < *(int *)(local_a0 + 0xc)) {
    lVar8 = 0;
    do {
      local_78 = *(longlong *)(*(longlong *)(local_a0 + 0x10) + lVar8 * 8);
      pvVar7 = _pthread_getspecific((pthread_key_t)uVar9);
      if (pvVar7 != (void *)0x0) {
        FUN_00e8b990();
      }
      iVar4 = FUN_0141bab0();
      if ((byte)(iVar4 != 4 | lVar2 != 0 & bVar3) == 1) {
        pvVar7 = _pthread_getspecific((pthread_key_t)uVar9);
        if (pvVar7 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0141b690();
        local_d0 = local_98;
        local_c8 = 0;
        if (local_90 == '\0') {
          if (local_98 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_90 = '\0';
        }
        local_c8 = '\x01';
        uVar11 = FUN_00d8ede0();
        local_c0 = local_88;
        local_b8 = 0;
        if (local_80 == '\0') {
          if (local_88 != 0) {
            uVar11 = FUN_00d50b00();
          }
        }
        else {
          local_80 = '\0';
        }
        local_b8 = '\x01';
        FUN_01d64ce0(uVar11,&local_c0);
        lVar1 = local_50;
        if (local_50 == local_40) {
LAB_006cd553:
          if (local_48 != '\0') {
LAB_006cd559:
            if (local_50 != 0) {
              FUN_00d50b20();
            }
          }
        }
        else {
          if (local_48 == '\0') {
            if (local_50 != 0) {
              FUN_00d50b00();
            }
            if (local_40 != 0) {
              FUN_00d50b20();
              local_40 = lVar1;
              goto LAB_006cd553;
            }
            local_40 = lVar1;
            if (local_48 == '\0') goto LAB_006cd567;
            goto LAB_006cd559;
          }
          if (local_40 != 0) {
            FUN_00d50b20();
          }
          local_48 = '\0';
          local_40 = lVar1;
        }
LAB_006cd567:
        if ((local_b8 != '\0') && (local_c0 != 0)) {
          FUN_00d50b20();
        }
        if ((local_80 != '\0') && (local_88 != 0)) {
          FUN_00d50b20();
        }
        if ((local_c8 != '\0') && (local_d0 != 0)) {
          FUN_00d50b20();
        }
        if ((local_90 != '\0') && (local_98 != 0)) {
          FUN_00d50b20();
        }
        FUN_01d66da0();
        pvVar7 = _pthread_getspecific((pthread_key_t)uVar9);
        if (pvVar7 != (void *)0x0) {
          FUN_00e8b990();
        }
        uVar11 = FUN_0141b660();
        local_b0 = local_88;
        local_a8 = 0;
        lVar1 = DAT_02726cf0;
        if (local_80 == '\0') {
          if (local_88 != 0) {
            uVar11 = FUN_00d50b00();
            lVar1 = DAT_02726cf0;
          }
        }
        else {
          local_80 = '\0';
        }
        local_a8 = '\x01';
        DAT_02726cf0 = lVar1;
        if (lVar1 != 0) {
          local_a8 = '\x01';
          uVar11 = FUN_00d50b00();
        }
        local_48 = '\0';
        local_50 = lVar1;
        FUN_00ca0840(uVar11,&local_50);
        if ((local_48 != '\0') && (local_50 != 0)) {
          FUN_00d50b20();
        }
        if (lVar1 != 0) {
          FUN_00d50b20();
        }
        if ((local_a8 != '\0') && (local_b0 != 0)) {
          FUN_00d50b20();
        }
        if ((local_80 != '\0') && (local_88 != 0)) {
          FUN_00d50b20();
        }
        if ((local_90 != '\0') && (local_98 != 0)) {
          FUN_00d50b20();
        }
        FUN_01d5d8d0();
      }
      lVar8 = lVar8 + 1;
      local_60 = CONCAT44(local_60._4_4_,(int)lVar8);
    } while ((int)lVar8 < *(int *)(local_a0 + 0xc));
  }
  FUN_002a08f0();
  FUN_00d50b20();
  plVar5 = local_38;
LAB_006cd777:
  FUN_01d6ed60();
  if (local_40 != 0) {
    FUN_00d50b20();
  }
  if (plVar5 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  return;
}


