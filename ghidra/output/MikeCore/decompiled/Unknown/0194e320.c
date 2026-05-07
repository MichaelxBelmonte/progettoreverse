// Function: FUN_0194e320
// Address: 0194e320
// Size: 1754 bytes
// Class: Unknown


void FUN_0194e320(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  void *pvVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  pthread_key_t in_ECX;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  longlong local_c8;
  char local_c0;
  longlong *local_b8;
  char local_b0;
  longlong local_a8;
  char local_a0;
  longlong local_98;
  char local_90;
  longlong local_88;
  char local_80;
  longlong local_78;
  char local_70;
  longlong local_68;
  char local_60;
  longlong local_58;
  char local_50;
  longlong *local_48;
  longlong local_40;
  char local_38;
  
  lVar1 = *unaff_RSI;
  lVar5 = unaff_RDI[0xb1];
  if (lVar5 != lVar1) {
    local_48 = param_1;
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    unaff_RDI[0xb1] = lVar1;
    param_1 = local_48;
    if (lVar5 != 0) {
      FUN_00d50b20();
      param_1 = local_48;
    }
  }
  unaff_RDI[0xaf] = (longlong)param_1;
  local_c8 = *param_2;
  local_c0 = '\0';
  (**(code **)(&UNK_00001848 + *unaff_RDI))(param_1,&local_c8);
  lVar1 = unaff_RDI[0xa8];
  lVar5 = lVar1;
  if (lVar1 == local_40) goto LAB_0194e41d;
  if (local_38 == '\0') {
    if (local_40 == 0) {
      lVar5 = 0;
      goto LAB_0194e3cf;
    }
    FUN_00d50b00();
    lVar1 = unaff_RDI[0xa8];
    unaff_RDI[0xa8] = local_40;
    lVar5 = local_40;
  }
  else {
    local_38 = '\0';
    lVar5 = local_40;
LAB_0194e3cf:
    unaff_RDI[0xa8] = lVar5;
  }
  in_ECX = (pthread_key_t)lVar1;
  if (lVar1 != 0) {
    FUN_00d50b20();
    lVar5 = local_40;
  }
LAB_0194e41d:
  if ((local_38 != '\0') && (lVar5 != 0)) {
    FUN_00d50b20();
  }
  if ((local_c0 != '\0') && (local_c8 != 0)) {
    FUN_00d50b20();
  }
  pvVar2 = _pthread_getspecific(in_ECX);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012ccc90();
  plVar3 = (longlong *)FUN_00e8fc40();
  FUN_000be3f0();
  (**(code **)(*plVar3 + 0x18))();
  plVar4 = (longlong *)unaff_RDI[0xa9];
  if (plVar4 == plVar3) {
    FUN_00d50b20();
  }
  else {
    unaff_RDI[0xa9] = (longlong)plVar3;
    if (plVar4 != (longlong *)0x0) {
      FUN_00d50b20();
    }
  }
  pvVar2 = _pthread_getspecific(in_ECX);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  local_50 = 0;
  lVar1 = unaff_RDI[0xa8];
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  local_50 = '\x01';
  local_58 = lVar1;
  FUN_01505960();
  if ((local_50 != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  plVar4 = (longlong *)FUN_00e8fc40();
  FUN_0013dd30();
  local_48 = plVar4;
  (**(code **)(*plVar4 + 0x18))();
  pvVar2 = _pthread_getspecific(in_ECX);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  local_b8 = local_48;
  local_b0 = '\0';
  FUN_01505730();
  if ((local_b0 != '\0') && (local_b8 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  pvVar2 = _pthread_getspecific(in_ECX);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012cb110();
  lVar1 = local_40;
  if ((((local_38 == '\0') && (local_40 != 0)) && (FUN_00d50b00(), local_38 != '\0')) &&
     (local_40 != 0)) {
    FUN_00d50b20();
  }
  pvVar2 = _pthread_getspecific(in_ECX);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e78c0();
  pvVar2 = _pthread_getspecific(in_ECX);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012c6d60(0);
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  pvVar2 = _pthread_getspecific(in_ECX);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e78c0();
  pvVar2 = _pthread_getspecific(in_ECX);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012c6cf0(0);
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  pvVar2 = _pthread_getspecific(in_ECX);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e7d10();
  pvVar2 = _pthread_getspecific(in_ECX);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_011f2610();
  pvVar2 = _pthread_getspecific(in_ECX);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  pvVar2 = _pthread_getspecific(in_ECX);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012cb110();
  pvVar2 = _pthread_getspecific(in_ECX);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e7d10();
  pvVar2 = _pthread_getspecific(in_ECX);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_011f2610();
  pvVar2 = _pthread_getspecific(in_ECX);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012a46e0();
  FUN_012a4680();
  if ((local_90 != '\0') && (local_98 != 0)) {
    FUN_00d50b20();
  }
  if ((local_80 != '\0') && (local_88 != 0)) {
    FUN_00d50b20();
  }
  if ((local_70 != '\0') && (local_78 != 0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if ((local_a0 != '\0') && (local_a8 != 0)) {
    FUN_00d50b20();
  }
  local_60 = 0;
  lVar5 = unaff_RDI[0xa8];
  if (lVar5 != 0) {
    FUN_00d50b00();
  }
  local_60 = '\x01';
  local_68 = lVar5;
  (**(code **)(*unaff_RDI + 0xa08))();
  if ((local_60 != '\0') && (local_68 != 0)) {
    FUN_00d50b20();
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  return;
}


