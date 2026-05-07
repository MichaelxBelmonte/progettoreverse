// Function: FUN_01679350
// Address: 01679350
// Size: 2339 bytes
// Class: GNUni


/* WARNING: Removing unreachable block (ram,0x016794ef) */
/* WARNING: Removing unreachable block (ram,0x016794fb) */

void FUN_01679350(pthread_key_t param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  char cVar3;
  longlong *plVar4;
  void *pvVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  longlong unaff_RDI;
  longlong local_1b8;
  char local_1b0;
  longlong local_1a8;
  char local_1a0;
  longlong local_198;
  char local_190;
  longlong local_188;
  char local_180;
  longlong local_178;
  char local_170;
  longlong local_168;
  char local_160;
  longlong local_158;
  char local_150;
  longlong local_148;
  char local_140;
  longlong local_138;
  char local_130;
  longlong local_128;
  char local_120;
  longlong local_118;
  char local_110;
  longlong local_108;
  char local_100;
  longlong local_f8;
  char local_f0;
  longlong local_58;
  char local_50;
  longlong local_48;
  char local_40;
  longlong *local_38;
  char local_30;
  
  FUN_00d50100();
  plVar4 = (longlong *)FUN_00e8fc40();
  FUN_01538a90();
  (**(code **)(*plVar4 + 0x18))();
  plVar1 = *(longlong **)(unaff_RDI + 0x20);
  if (plVar1 == plVar4) {
    FUN_00d50b20();
  }
  else {
    *(longlong **)(unaff_RDI + 0x20) = plVar4;
    if (plVar1 != (longlong *)0x0) {
      FUN_00d50b20();
    }
  }
  FUN_016ae630();
  FUN_00c811e0();
  plVar1 = local_38;
  if (local_30 == '\0') {
    if (((local_38 != (longlong *)0x0) && (FUN_00d50b00(), local_30 != '\0')) &&
       (local_38 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_30 = '\0';
  }
  if ((local_40 != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  pvVar5 = _pthread_getspecific(param_1);
  plVar4 = plVar1;
  if ((pvVar5 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
    plVar4 = (longlong *)plVar1[(ulonglong)(*(uint *)(lVar6 + 0x154) & 1) + 4];
  }
  (**(code **)(*plVar4 + 0x18))();
  pvVar5 = _pthread_getspecific(param_1);
  plVar4 = plVar1;
  if ((pvVar5 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
    plVar4 = (longlong *)plVar1[(ulonglong)(*(uint *)(lVar6 + 0x154) & 1) + 4];
  }
  FUN_00d50b00();
  (**(code **)(*plVar4 + 0x368))();
  if (unaff_RDI != 0) {
    FUN_00d50b20();
  }
  pvVar5 = _pthread_getspecific(param_1);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01537a40();
  plVar7 = (longlong *)FUN_00e8fc40();
  FUN_00039550();
  (**(code **)(*plVar7 + 0x18))();
  plVar4 = *(longlong **)(unaff_RDI + 0x38);
  if (plVar4 == plVar7) {
    FUN_00d50b20();
  }
  else {
    *(longlong **)(unaff_RDI + 0x38) = plVar7;
    if (plVar4 != (longlong *)0x0) {
      FUN_00d50b20();
    }
  }
  plVar4 = *(longlong **)(unaff_RDI + 0x38);
  lVar6 = *(longlong *)(unaff_RDI + 0x20);
  if (lVar6 != 0) {
    FUN_00d50b00();
  }
  (**(code **)(*plVar4 + 0x3a0))();
  if (lVar6 != 0) {
    FUN_00d50b20();
  }
  FUN_00cb1f10();
  FUN_00db3760();
  if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00d403d0();
  FUN_00d50b00();
  local_1b8 = DAT_027e3b30;
  if (DAT_027e3b30 != 0) {
    FUN_00d50b00();
  }
  local_1b0 = '\x01';
  FUN_00cb1f10();
  local_58 = local_48;
  local_50 = 0;
  if (local_40 == '\0') {
    if (local_48 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_40 = '\0';
  }
  local_50 = '\x01';
  FUN_00d41430(&local_58,&local_1b8);
  if ((local_50 != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  if ((local_40 != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  if ((local_1b0 != '\0') && (local_1b8 != 0)) {
    FUN_00d50b20();
  }
  if (unaff_RDI != 0) {
    FUN_00d50b20();
  }
  if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  puVar8 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar8 = &DAT_025f7058;
  (*DAT_025f7070)();
  puVar2 = *(undefined8 **)(unaff_RDI + 0x40);
  if (puVar2 == puVar8) {
    FUN_00d50b20();
  }
  else {
    *(undefined8 **)(unaff_RDI + 0x40) = puVar8;
    if (puVar2 != (undefined8 *)0x0) {
      FUN_00d50b20();
    }
  }
  cVar3 = FUN_016ae5f0();
  if (cVar3 != '\0') {
    FUN_00d403d0();
    FUN_00d50b00();
    local_1a8 = DAT_0277d8e0;
    if (DAT_0277d8e0 != 0) {
      FUN_00d50b00();
    }
    local_1a0 = '\x01';
    local_198 = 0;
    local_190 = '\0';
    FUN_00d41430(&local_198,&local_1a8);
    if ((local_190 != '\0') && (local_198 != 0)) {
      FUN_00d50b20();
    }
    if ((local_1a0 != '\0') && (local_1a8 != 0)) {
      FUN_00d50b20();
    }
    if (unaff_RDI != 0) {
      FUN_00d50b20();
    }
    if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    FUN_00d403d0();
    FUN_00d50b00();
    local_188 = DAT_0270b7b0;
    if (DAT_0270b7b0 != 0) {
      FUN_00d50b00();
    }
    local_180 = '\x01';
    local_178 = 0;
    local_170 = '\0';
    FUN_00d41430(&local_178,&local_188);
    if ((local_170 != '\0') && (local_178 != 0)) {
      FUN_00d50b20();
    }
    if ((local_180 != '\0') && (local_188 != 0)) {
      FUN_00d50b20();
    }
    if (unaff_RDI != 0) {
      FUN_00d50b20();
    }
    if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    FUN_00d403d0();
    FUN_00d50b00();
    local_168 = DAT_0270b7c0;
    if (DAT_0270b7c0 != 0) {
      FUN_00d50b00();
    }
    local_160 = '\x01';
    local_158 = 0;
    local_150 = '\0';
    FUN_00d41430(&local_158,&local_168);
    if ((local_150 != '\0') && (local_158 != 0)) {
      FUN_00d50b20();
    }
    if ((local_160 != '\0') && (local_168 != 0)) {
      FUN_00d50b20();
    }
    if (unaff_RDI != 0) {
      FUN_00d50b20();
    }
    if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    FUN_00d403d0();
    FUN_00d50b00();
    local_148 = DAT_0270b7d0;
    if (DAT_0270b7d0 != 0) {
      FUN_00d50b00();
    }
    local_140 = '\x01';
    local_138 = 0;
    local_130 = '\0';
    FUN_00d41430(&local_138,&local_148);
    if ((local_130 != '\0') && (local_138 != 0)) {
      FUN_00d50b20();
    }
    if ((local_140 != '\0') && (local_148 != 0)) {
      FUN_00d50b20();
    }
    if (unaff_RDI != 0) {
      FUN_00d50b20();
    }
    if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    FUN_00d403d0();
    FUN_00d50b00();
    local_128 = DAT_02763340;
    if (DAT_02763340 != 0) {
      FUN_00d50b00();
    }
    local_120 = '\x01';
    local_118 = 0;
    local_110 = '\0';
    FUN_00d41430(&local_118,&local_128);
    if ((local_110 != '\0') && (local_118 != 0)) {
      FUN_00d50b20();
    }
    if ((local_120 != '\0') && (local_128 != 0)) {
      FUN_00d50b20();
    }
    if (unaff_RDI != 0) {
      FUN_00d50b20();
    }
    if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    FUN_00d403d0();
    FUN_00d50b00();
    local_108 = DAT_02763350;
    if (DAT_02763350 != 0) {
      FUN_00d50b00();
    }
    local_100 = '\x01';
    local_f8 = 0;
    local_f0 = '\0';
    FUN_00d41430(&local_f8,&local_108);
    if ((local_f0 != '\0') && (local_f8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_100 != '\0') && (local_108 != 0)) {
      FUN_00d50b20();
    }
    if (unaff_RDI != 0) {
      FUN_00d50b20();
    }
    if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  if (plVar1 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  return;
}


