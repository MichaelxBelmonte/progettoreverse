// Function: FUN_017aa660
// Address: 017aa660
// Size: 797 bytes
// Class: GNData
// String references:
//   "com.celemony.scale.Custom.%@"


/* WARNING: Removing unreachable block (ram,0x017aa795) */
/* WARNING: Removing unreachable block (ram,0x017aa79e) */

void FUN_017aa660(pthread_key_t param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  void *pvVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 *unaff_RDI;
  undefined8 *puVar7;
  undefined4 uVar8;
  longlong local_88;
  char local_80;
  longlong local_68;
  char local_60;
  undefined8 *local_58;
  uint local_50;
  longlong local_48;
  char local_40;
  undefined1 local_31;
  
  puVar3 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar3 = &DAT_026034e8;
  puVar3[0xc] = 0;
  puVar3[7] = 0;
  puVar3[8] = 0;
  puVar3[9] = 0;
  puVar3[10] = 0;
  *(undefined8 *)((longlong)puVar3 + 0x55) = 0;
  FUN_00d500e0();
  pvVar4 = _pthread_getspecific(param_1);
  puVar7 = puVar3;
  if ((pvVar4 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
    puVar7 = (undefined8 *)puVar3[(ulonglong)(*(uint *)(lVar5 + 0x154) & 1) + 4];
  }
  FUN_0173b120();
  puVar2 = local_58;
  if ((char)local_50 == '\0') {
    if (local_58 != (undefined8 *)0x0) {
      FUN_00d50b00();
      goto LAB_017aa730;
    }
    if (puVar7[7] != 0) {
      puVar7[7] = 0;
      local_31 = 1;
      goto LAB_017aa766;
    }
  }
  else {
    local_50 = local_50 & 0xffffff00;
LAB_017aa730:
    puVar1 = (undefined8 *)puVar7[7];
    if (puVar1 != puVar2) {
      local_31 = puVar2 == (undefined8 *)0x0;
      if (!(bool)local_31) {
        FUN_00d50b00();
      }
      puVar7[7] = puVar2;
      if (puVar1 != (undefined8 *)0x0) {
LAB_017aa766:
        FUN_00d50b20();
      }
    }
    if (puVar2 != (undefined8 *)0x0) {
      FUN_00d50b20();
    }
  }
  if (((char)local_50 != '\0') && (local_58 != (undefined8 *)0x0)) {
    FUN_00d50b20();
  }
  pvVar4 = _pthread_getspecific(param_1);
  if ((pvVar4 == (void *)0x0) || (lVar5 = FUN_00e8b990(), lVar5 == 0)) {
    lVar6 = *param_2;
    puVar7 = puVar3;
    if (puVar3[9] == lVar6) goto LAB_017aa828;
  }
  else {
    lVar6 = *param_2;
    puVar7 = (undefined8 *)puVar3[(ulonglong)(*(uint *)(lVar5 + 0x154) & 1) + 4];
    if (((undefined8 *)puVar3[(ulonglong)(*(uint *)(lVar5 + 0x154) & 1) + 4])[9] == lVar6)
    goto LAB_017aa828;
  }
  FUN_00d64850();
  lVar5 = puVar7[9];
  if (lVar5 != lVar6) {
    if (lVar6 != 0) {
      FUN_00d50b00();
    }
    puVar7[9] = lVar6;
    if (lVar5 != 0) {
      FUN_00d50b20();
    }
  }
  FUN_00d64910();
LAB_017aa828:
  pvVar4 = _pthread_getspecific(param_1);
  puVar7 = puVar3;
  if ((pvVar4 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
    puVar7 = (undefined8 *)puVar3[(ulonglong)(*(uint *)(lVar5 + 0x154) & 1) + 4];
  }
  uVar8 = FUN_00d9bb60();
  local_50 = 1;
  local_58 = &DAT_024c5048;
  local_40 = 0;
  if (local_88 != 0) {
    uVar8 = FUN_00d50b00();
  }
  local_48 = local_88;
  local_40 = '\x01';
  FUN_00d8cb40(uVar8,&local_58);
  if (local_60 == '\0') {
    if (local_68 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_60 = '\0';
  }
  if (puVar7[8] != local_68) {
    FUN_00d64850();
    lVar5 = puVar7[8];
    if (lVar5 != local_68) {
      if (local_68 != 0) {
        FUN_00d50b00();
      }
      puVar7[8] = local_68;
      if (lVar5 != 0) {
        FUN_00d50b20();
      }
    }
    FUN_00d64910();
  }
  if (local_68 != 0) {
    FUN_00d50b20();
  }
  if ((local_60 != '\0') && (local_68 != 0)) {
    FUN_00d50b20();
  }
  local_58 = &DAT_024c5048;
  if ((local_40 != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  if ((local_80 != '\0') && (local_88 != 0)) {
    FUN_00d50b20();
  }
  *unaff_RDI = puVar3;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return;
}


