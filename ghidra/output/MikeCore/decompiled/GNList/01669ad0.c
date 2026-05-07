// Function: FUN_01669ad0
// Address: 01669ad0
// Size: 1544 bytes
// Class: GNList


/* WARNING: Removing unreachable block (ram,0x0166a075) */

ulonglong FUN_01669ad0(pthread_key_t param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  void *pvVar4;
  longlong lVar5;
  pthread_key_t pVar6;
  longlong *plVar7;
  undefined8 *unaff_RBX;
  undefined7 uVar9;
  ulonglong uVar8;
  int unaff_ESI;
  longlong unaff_RDI;
  longlong local_f8;
  longlong local_f0;
  char local_e8;
  undefined8 *local_e0;
  char local_d8;
  longlong local_d0;
  char local_c8;
  undefined8 *local_c0;
  char local_b8;
  longlong local_b0;
  char local_a8;
  longlong local_a0;
  char local_98;
  longlong local_90;
  char local_88;
  longlong local_80;
  char local_78;
  undefined8 *local_70;
  char local_68;
  longlong local_60;
  char local_58;
  longlong local_50;
  char local_48;
  longlong local_40;
  char local_38;
  
  local_a8 = '\0';
  local_b0 = 0;
  local_98 = '\0';
  local_a0 = 0;
  uVar3 = 0;
  if (unaff_ESI != 0) {
    pvVar4 = _pthread_getspecific(param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0124df10();
    pvVar4 = _pthread_getspecific(param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0132d610();
    unaff_RBX = local_70;
    if ((local_68 != '\0') && (local_70 != (undefined8 *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if (unaff_RBX != (undefined8 *)0x0) {
      pvVar4 = _pthread_getspecific(param_1);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0124df10();
      pvVar4 = _pthread_getspecific(param_1);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0132d610();
      unaff_RBX = local_70;
      pvVar4 = _pthread_getspecific(param_1);
      puVar2 = local_70;
      if ((pvVar4 != (void *)0x0) && (lVar5 = FUN_00e8b990(), unaff_RBX = puVar2, lVar5 != 0)) {
        unaff_RBX = (undefined8 *)puVar2[(ulonglong)(*(uint *)(lVar5 + 0x154) & 1) + 4];
      }
      uVar3 = FUN_016c2e90();
      if ((local_68 != '\0') && (local_70 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
    }
  }
  plVar7 = &local_b0;
  FUN_01684460(plVar7,*(undefined8 *)(unaff_RDI + 0x38),&local_a0,uVar3);
  puVar2 = local_70;
  pVar6 = (pthread_key_t)plVar7;
  if (local_68 == '\0') {
    if (local_70 == (undefined8 *)0x0) goto LAB_01669e9b;
    FUN_00d50b00();
    if ((local_68 != '\0') && (local_70 != (undefined8 *)0x0)) {
      FUN_00d50b20();
    }
LAB_01669d13:
    pvVar4 = _pthread_getspecific(pVar6);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0124df10();
    pvVar4 = _pthread_getspecific(pVar6);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_e0 = puVar2;
    local_d8 = '\0';
    FUN_0132d960();
    if ((local_d8 != '\0') && (local_e0 != (undefined8 *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_68 != '\0') && (local_70 != (undefined8 *)0x0)) {
      FUN_00d50b20();
    }
    FUN_00d403d0();
    local_d0 = DAT_027ebe30;
    if (DAT_027ebe30 != 0) {
      FUN_00d50b00();
    }
    local_c8 = '\x01';
    local_c0 = puVar2;
    local_b8 = '\0';
    FUN_00d46300();
    lVar5 = DAT_027c8270;
    if (DAT_027c8270 != 0) {
      FUN_00d50b00();
    }
    local_f8 = lVar5;
    FUN_00083ea0(2,&local_f8);
    FUN_000b4da0();
    local_80 = local_90;
    local_78 = 0;
    if (local_88 == '\0') {
      if (local_90 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_88 = '\0';
    }
    local_78 = '\x01';
    FUN_00d40470(&local_80,&local_c0,3,3);
    if ((local_78 != '\0') && (local_80 != 0)) {
      FUN_00d50b20();
    }
    if ((local_88 != '\0') && (local_90 != 0)) {
      FUN_00d50b20();
    }
    local_70 = (undefined8 *)&DAT_0253d630;
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    local_70 = &DAT_024c5048;
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
    if (lVar5 != 0) {
      FUN_00d50b20();
    }
    if ((local_e8 != '\0') && (local_f0 != 0)) {
      FUN_00d50b20();
    }
    if ((local_b8 != '\0') && (local_c0 != (undefined8 *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_c8 != '\0') && (local_d0 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    lVar1 = local_b0;
    lVar5 = *(longlong *)(unaff_RDI + 0x108);
    if (lVar5 != local_b0) {
      if (local_b0 != 0) {
        FUN_00d50b00();
      }
      *(longlong *)(unaff_RDI + 0x108) = lVar1;
      if (lVar5 != 0) {
        FUN_00d50b20();
      }
    }
    lVar1 = local_a0;
    lVar5 = *(longlong *)(unaff_RDI + 0x110);
    if (lVar5 != local_a0) {
      if (local_a0 != 0) {
        FUN_00d50b00();
      }
      *(longlong *)(unaff_RDI + 0x110) = lVar1;
      if (lVar5 == 0) {
        uVar8 = 0;
      }
      else {
        FUN_00d50b20();
        uVar8 = 0;
      }
      goto LAB_0166a079;
    }
    uVar8 = 0;
  }
  else {
    if (local_70 != (undefined8 *)0x0) goto LAB_01669d13;
LAB_01669e9b:
    if (*(longlong *)(unaff_RDI + 0x108) != 0) {
      *(undefined8 *)(unaff_RDI + 0x108) = 0;
      FUN_00d50b20();
    }
    uVar9 = (undefined7)((ulonglong)unaff_RBX >> 8);
    if (*(longlong *)(unaff_RDI + 0x110) == 0) {
      uVar8 = CONCAT71(uVar9,1);
      goto LAB_0166a085;
    }
    *(undefined8 *)(unaff_RDI + 0x110) = 0;
    FUN_00d50b20();
    uVar8 = CONCAT71(uVar9,1);
LAB_0166a079:
    if ((char)uVar8 != '\0') goto LAB_0166a085;
  }
  FUN_00d50b20();
LAB_0166a085:
  if ((local_98 != '\0') && (local_a0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_a8 != '\0') && (local_b0 != 0)) {
    FUN_00d50b20();
  }
  return (uVar8 ^ 1) & 0xffffffff;
}


