// Function: FUN_00757320
// Address: 00757320
// Size: 1249 bytes
// Class: MUAudioIOSlot


/* WARNING: Removing unreachable block (ram,0x00757789) */
/* WARNING: Removing unreachable block (ram,0x00757796) */

void FUN_00757320(pthread_key_t param_1)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  longlong *plVar4;
  void *pvVar5;
  longlong *unaff_RDI;
  longlong *local_b0;
  char local_a8;
  longlong *local_30;
  char local_28;
  
  plVar4 = (longlong *)FUN_002dd0f0();
  (**(code **)(*plVar4 + 0x18))();
  plVar1 = (longlong *)unaff_RDI[0x13];
  if (plVar1 == plVar4) {
    FUN_00d50b20();
  }
  else {
    unaff_RDI[0x13] = (longlong)plVar4;
    if (plVar1 != (longlong *)0x0) {
      FUN_00d50b20();
    }
  }
  pvVar5 = _pthread_getspecific(param_1);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_00aea5e0(0);
  FUN_01530a20();
  plVar4 = (longlong *)FUN_00e8fc40();
  FUN_0038cc50();
  (**(code **)(*plVar4 + 0x18))();
  plVar1 = (longlong *)unaff_RDI[0x12];
  if (plVar1 == plVar4) {
    FUN_00d50b20();
  }
  else {
    unaff_RDI[0x12] = (longlong)plVar4;
    if (plVar1 != (longlong *)0x0) {
      FUN_00d50b20();
    }
  }
  FUN_00757c60();
  if (local_28 == '\0') {
    if (local_30 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_28 = '\0';
  }
  FUN_012d1940();
  if (local_30 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if ((local_28 != '\0') && (local_30 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00757de0();
  if ((local_28 == '\0') && (local_30 != (longlong *)0x0)) {
    FUN_00d50b00();
  }
  FUN_012d8bb0();
  if (local_30 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  lVar2 = unaff_RDI[0x13];
  if (lVar2 != 0) {
    FUN_00d50b00();
  }
  FUN_012dddb0();
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  (**(code **)(*unaff_RDI + 0x498))();
  FUN_00cafd20();
  if ((local_28 != '\0') && (local_30 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  (**(code **)(*unaff_RDI + 0x498))();
  lVar2 = unaff_RDI[0x13];
  if (lVar2 != 0) {
    FUN_00d50b00();
  }
  (**(code **)(*local_30 + 0x3a0))();
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  if ((local_28 != '\0') && (local_30 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  (**(code **)(*unaff_RDI + 0x498))();
  (**(code **)(*local_30 + 0x3c8))();
  if ((local_28 != '\0') && (local_30 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  FUN_01f27fe0();
  (**(code **)(*local_b0 + 0x7b0))();
  if (local_28 == '\0') {
    if (local_30 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_28 = '\0';
  }
  if ((local_a8 != '\0') && (local_b0 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  lVar2 = unaff_RDI[0x12];
  if (lVar2 != 0) {
    FUN_00d50b00();
  }
  FUN_01257c40();
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  cVar3 = (**(code **)(*local_30 + 0x390))();
  if (cVar3 == '\0') {
    lVar2 = unaff_RDI[0x12];
    if (lVar2 != 0) {
      FUN_00d50b00();
    }
    FUN_01257980();
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
  }
  else {
    (**(code **)(*(longlong *)unaff_RDI[0x12] + 0x368))();
    lVar2 = unaff_RDI[0x12];
    if (lVar2 != 0) {
      FUN_00d50b00();
    }
    FUN_01257a80();
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
  }
  if (unaff_RDI[0xe] != 0) {
    FUN_00d50b00();
    FUN_00d50b20();
    FUN_00b160d0();
    if (local_28 == '\0') {
      if (local_30 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_28 = '\0';
    }
    FUN_00757ea0();
    if (local_30 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    if ((local_28 != '\0') && (local_30 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  FUN_00d50b20();
  return;
}


