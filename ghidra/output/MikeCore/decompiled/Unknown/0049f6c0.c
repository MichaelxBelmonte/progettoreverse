// Function: FUN_0049f6c0
// Address: 0049f6c0
// Size: 2241 bytes
// Class: Unknown


undefined8 * FUN_0049f6c0(pthread_key_t param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  char cVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  void *pvVar6;
  longlong lVar7;
  char *pcVar8;
  pthread_key_t pVar9;
  char *pcVar10;
  longlong *plVar11;
  pthread_key_t unaff_ESI;
  undefined8 *unaff_RDI;
  longlong *plVar12;
  undefined4 extraout_XMM0_Da;
  undefined4 uVar13;
  longlong local_e8;
  char local_e0;
  longlong local_d8;
  char local_d0;
  longlong *local_c8;
  char local_c0;
  longlong *local_b8;
  char local_b0;
  longlong *local_a8;
  char local_a0;
  longlong *local_98;
  char local_90;
  undefined8 local_88;
  longlong local_80;
  char local_78;
  longlong local_70;
  char local_68;
  longlong *local_60;
  longlong *local_58;
  undefined8 *local_50;
  longlong *local_48;
  char local_40 [8];
  char local_38 [8];
  
  puVar4 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar4 = &DAT_024e9f60;
  puVar4[0xd] = 0;
  puVar4[7] = 0;
  puVar4[8] = 0;
  puVar4[9] = 0;
  puVar4[10] = 0;
  *(undefined8 *)((longlong)puVar4 + 0x51) = 0;
  *(undefined8 *)((longlong)puVar4 + 0x59) = 0;
  FUN_00d500e0();
  FUN_01f27fe0();
  cVar3 = (**(code **)(*local_48 + 0x450))();
  uVar13 = extraout_XMM0_Da;
  if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
    uVar13 = FUN_00d50b20();
  }
  if (unaff_ESI == 2) {
    uVar5 = FUN_013133d0(uVar13,1);
    plVar12 = local_48;
    if (local_48 != (longlong *)0x0) {
      local_88 = CONCAT71((int7)((ulonglong)uVar5 >> 8),1);
      if (((local_40[0] == '\0') && (FUN_00d50b00(), local_40[0] != '\0')) &&
         (local_48 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      goto LAB_0049f7e1;
    }
  }
  else {
    param_1 = unaff_ESI;
    uVar5 = FUN_01312f90(unaff_ESI,1);
    plVar12 = local_48;
    if (local_48 != (longlong *)0x0) {
      local_88 = CONCAT71((int7)((ulonglong)uVar5 >> 8),1);
      if (((local_40[0] == '\0') && (FUN_00d50b00(), local_40[0] != '\0')) &&
         (local_48 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      goto LAB_0049f7e1;
    }
  }
  plVar12 = (longlong *)0x0;
  local_88 = 0;
LAB_0049f7e1:
  pvVar6 = _pthread_getspecific(param_1);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01313ad0();
  local_58 = local_48;
  if (((local_40[0] == '\0') && (local_48 != (longlong *)0x0)) &&
     ((FUN_00d50b00(), local_40[0] != '\0' && (local_48 != (longlong *)0x0)))) {
    FUN_00d50b20();
  }
  pvVar6 = _pthread_getspecific(param_1);
  if ((pvVar6 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
    param_1 = (pthread_key_t)local_58;
  }
  FUN_012cb450();
  local_c8 = local_48;
  local_c0 = 0;
  if (local_40[0] == '\0') {
    if (local_48 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_40[0] = '\0';
  }
  local_c0 = '\x01';
  FUN_0044c720();
  if ((local_c0 != '\0') && (local_c8 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (cVar3 != '\0') {
    local_60 = plVar12;
    local_50 = puVar4;
    pvVar6 = _pthread_getspecific(param_1);
    if ((pvVar6 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
      param_1 = (pthread_key_t)local_58;
    }
    FUN_012cb110();
    pvVar6 = _pthread_getspecific(param_1);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012e6160();
    FUN_00d23310();
    plVar12 = local_48;
    local_38[0] = local_40[0];
    pcVar10 = local_38;
    pcVar8 = local_40;
    if (local_40[0] == '\0') {
      pcVar8 = pcVar10;
    }
    *pcVar8 = '\0';
    if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    pvVar6 = _pthread_getspecific((pthread_key_t)pcVar10);
    lVar7 = DAT_026f6f70;
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
      lVar7 = DAT_026f6f70;
    }
    DAT_026f6f70 = lVar7;
    if (lVar7 != 0) {
      FUN_00d50b00();
    }
    lVar2 = DAT_02729650;
    if (DAT_02729650 != 0) {
      FUN_00d50b00();
    }
    local_e8 = lVar2;
    local_e0 = '\x01';
    local_d8 = 0;
    local_d0 = '\0';
    plVar11 = &local_d8;
    FUN_00d31230(plVar11,&local_e8);
    local_b8 = local_48;
    pVar9 = (pthread_key_t)plVar11;
    local_b0 = 0;
    if (local_40[0] == '\0') {
      if (local_48 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_40[0] = '\0';
    }
    local_b0 = '\x01';
    FUN_012e5f80();
    if ((local_b0 != '\0') && (local_b8 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_d0 != '\0') && (local_d8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_e0 != '\0') && (local_e8 != 0)) {
      FUN_00d50b20();
    }
    if (lVar7 != 0) {
      FUN_00d50b20();
    }
    if ((local_38[0] != '\0') && (plVar12 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_68 != '\0') && (local_70 != 0)) {
      FUN_00d50b20();
    }
    if ((local_78 != '\0') && (local_80 != 0)) {
      FUN_00d50b20();
    }
    pvVar6 = _pthread_getspecific(pVar9);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012cb110();
    pvVar6 = _pthread_getspecific(pVar9);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012e6160();
    FUN_00d23310();
    plVar11 = local_48;
    pcVar10 = local_38;
    pcVar8 = local_40;
    if (local_40[0] == '\0') {
      pcVar8 = pcVar10;
    }
    local_38[0] = local_40[0];
    *pcVar8 = '\0';
    if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    puVar4 = local_50;
    plVar12 = local_60;
    param_1 = (pthread_key_t)pcVar10;
    local_a0 = 0;
    if (local_38[0] == '\0') {
      if (plVar11 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38[0] = '\0';
    }
    local_a0 = '\x01';
    local_a8 = plVar11;
    pvVar6 = _pthread_getspecific(param_1);
    if ((pvVar6 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
      param_1 = (pthread_key_t)local_58;
    }
    FUN_012cb450();
    local_98 = local_48;
    local_90 = 0;
    if (local_40[0] == '\0') {
      if (local_48 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_40[0] = '\0';
    }
    local_90 = '\x01';
    FUN_0044be80();
    if ((local_90 != '\0') && (local_98 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_a0 != '\0') && (local_a8 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_68 != '\0') && (local_70 != 0)) {
      FUN_00d50b20();
    }
    if ((local_78 != '\0') && (local_80 != 0)) {
      FUN_00d50b20();
    }
  }
  pvVar6 = _pthread_getspecific(param_1);
  if ((pvVar6 == (void *)0x0) || (lVar7 = FUN_00e8b990(), lVar7 == 0)) {
    plVar11 = (longlong *)puVar4[7];
    puVar1 = puVar4;
  }
  else {
    puVar1 = (undefined8 *)puVar4[(ulonglong)(*(uint *)(lVar7 + 0x154) & 1) + 4];
    plVar11 = (longlong *)puVar1[7];
  }
  if (plVar11 != plVar12) {
    if (plVar12 != (longlong *)0x0) {
      FUN_00d50b00();
    }
    puVar1[7] = plVar12;
    if (plVar11 != (longlong *)0x0) {
      FUN_00d50b20();
    }
  }
  pvVar6 = _pthread_getspecific(param_1);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  pvVar6 = _pthread_getspecific(param_1);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01313ad0();
  pvVar6 = _pthread_getspecific(param_1);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  uVar13 = FUN_012cb110();
  plVar11 = local_48;
  if (local_40[0] == '\0') {
    if (local_48 != (longlong *)0x0) {
      uVar13 = FUN_00d50b00();
    }
  }
  else {
    local_40[0] = '\0';
  }
  FUN_004a0530(uVar13,1);
  if (plVar11 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_68 != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
  *unaff_RDI = puVar4;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  if (local_58 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if (((char)local_88 != '\0') && (plVar12 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  return unaff_RDI;
}


