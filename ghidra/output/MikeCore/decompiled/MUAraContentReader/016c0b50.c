// Function: FUN_016c0b50
// Address: 016c0b50
// Size: 1026 bytes
// Class: MUAraContentReader


/* WARNING: Removing unreachable block (ram,0x016c0dcf) */
/* WARNING: Removing unreachable block (ram,0x016c0dd8) */
/* WARNING: Removing unreachable block (ram,0x016c0e9d) */
/* WARNING: Removing unreachable block (ram,0x016c0f02) */
/* WARNING: Removing unreachable block (ram,0x016c0f0b) */

void FUN_016c0b50(undefined8 param_1)

{
  longlong *plVar1;
  void *pvVar2;
  longlong lVar3;
  undefined8 uVar4;
  pthread_key_t in_ECX;
  undefined8 *unaff_RDI;
  longlong *plVar5;
  undefined8 extraout_XMM0_Qa;
  longlong local_78;
  char local_70;
  longlong local_50;
  char local_48;
  longlong local_40;
  char local_38;
  
  plVar1 = (longlong *)FUN_00e8fc40();
  FUN_0119c6b0();
  (**(code **)(*plVar1 + 0x18))();
  pvVar2 = _pthread_getspecific(in_ECX);
  plVar5 = plVar1;
  if ((pvVar2 != (void *)0x0) && (lVar3 = FUN_00e8b990(), lVar3 != 0)) {
    plVar5 = (longlong *)plVar1[(ulonglong)(*(uint *)(lVar3 + 0x154) & 1) + 4];
  }
  pvVar2 = _pthread_getspecific(in_ECX);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_018f9320(param_1);
  if (local_38 == '\0') {
    if (local_40 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  FUN_00d64850();
  lVar3 = plVar5[10];
  if (lVar3 != local_40) {
    if (local_40 != 0) {
      FUN_00d50b00();
    }
    plVar5[10] = local_40;
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
  }
  FUN_00d64910();
  if (local_40 != 0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  pvVar2 = _pthread_getspecific(in_ECX);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  pvVar2 = _pthread_getspecific(in_ECX);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  pvVar2 = _pthread_getspecific(in_ECX);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_019012b0();
  pvVar2 = _pthread_getspecific(in_ECX);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_019079b0();
  uVar4 = FUN_00e7bcc0();
  FUN_01909ea0(extraout_XMM0_Qa,uVar4);
  if (local_48 == '\0') {
    if (local_50 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_48 = '\0';
  }
  FUN_00d21140();
  if (local_50 != 0) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  if ((local_70 != '\0') && (local_78 != 0)) {
    FUN_00d50b20();
  }
  pvVar2 = _pthread_getspecific(in_ECX);
  plVar5 = plVar1;
  if ((pvVar2 != (void *)0x0) && (lVar3 = FUN_00e8b990(), lVar3 != 0)) {
    plVar5 = (longlong *)plVar1[(ulonglong)(*(uint *)(lVar3 + 0x154) & 1) + 4];
  }
  FUN_0123fbe0();
  if (local_48 == '\0') {
    if (local_50 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_48 = '\0';
  }
  FUN_0165b080();
  if (local_50 != 0) {
    FUN_00d50b00();
  }
  FUN_00d64850();
  lVar3 = plVar5[0xb];
  if (lVar3 != local_50) {
    if (local_50 != 0) {
      FUN_00d50b00();
    }
    plVar5[0xb] = local_50;
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
  }
  FUN_00d64910();
  if (local_50 != 0) {
    FUN_00d50b20();
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  *unaff_RDI = plVar1;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return;
}


