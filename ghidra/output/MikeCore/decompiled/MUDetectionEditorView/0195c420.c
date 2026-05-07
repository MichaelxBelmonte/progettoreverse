// Function: FUN_0195c420
// Address: 0195c420
// Size: 834 bytes
// Class: MUDetectionEditorView


void FUN_0195c420(void)

{
  void *pvVar1;
  longlong lVar2;
  pthread_key_t pVar3;
  longlong *plVar4;
  longlong unaff_RDI;
  longlong local_c8;
  char local_c0;
  longlong local_b8;
  char local_b0;
  longlong local_a8;
  char local_a0;
  longlong local_98;
  char local_90;
  longlong local_88;
  char local_80;
  longlong local_78;
  char local_70;
  longlong *local_68;
  char local_60;
  
  FUN_00d403d0();
  if (unaff_RDI != 0) {
    FUN_00d50b00();
  }
  local_b8 = 0;
  local_b0 = '\0';
  local_a8 = 0;
  local_a0 = '\0';
  plVar4 = &local_a8;
  FUN_00d41040(plVar4,&local_b8);
  pVar3 = (pthread_key_t)plVar4;
  if ((local_a0 != '\0') && (local_a8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_b0 != '\0') && (local_b8 != 0)) {
    FUN_00d50b20();
  }
  if (unaff_RDI != 0) {
    FUN_00d50b20();
  }
  if ((local_c0 != '\0') && (local_c8 != 0)) {
    FUN_00d50b20();
  }
  if (*(longlong *)(unaff_RDI + 0x178) != 0) {
    pvVar1 = _pthread_getspecific(pVar3);
    if (pvVar1 != (void *)0x0) {
      FUN_00e8b990();
    }
    plVar4 = (longlong *)(unaff_RDI + 0x168);
    (**(code **)(*(longlong *)(unaff_RDI + 0x168) + 0x10))();
    FUN_00d50b00();
    local_98 = 0;
    local_90 = '\0';
    FUN_00e8b9a0();
    if ((local_90 != '\0') && (local_98 != 0)) {
      FUN_00d50b20();
    }
    if (plVar4 != (longlong *)0x0) {
      (**(code **)(*plVar4 + 0x10))();
      FUN_00d50b20();
    }
    pvVar1 = _pthread_getspecific(pVar3);
    if (pvVar1 != (void *)0x0) {
      FUN_00e8b990();
    }
    lVar2 = FUN_00e8b990();
    if (lVar2 != 0) {
      pvVar1 = _pthread_getspecific(pVar3);
      if (pvVar1 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_00e8b990();
      (**(code **)(*plVar4 + 0x10))();
      FUN_00d50b00();
      local_88 = 0;
      local_80 = '\0';
      local_78 = 0;
      local_70 = '\0';
      FUN_00cbadd0(&local_78,&local_88);
      if ((local_70 != '\0') && (local_78 != 0)) {
        FUN_00d50b20();
      }
      if ((local_80 != '\0') && (local_88 != 0)) {
        FUN_00d50b20();
      }
      if (plVar4 != (longlong *)0x0) {
        (**(code **)(*plVar4 + 0x10))();
        FUN_00d50b20();
      }
    }
    if (*(longlong *)(unaff_RDI + 0x178) != 0) {
      *(undefined8 *)(unaff_RDI + 0x178) = 0;
      FUN_00d50b20();
    }
  }
  (**(code **)(*(longlong *)(unaff_RDI + 0x168) + 0x10))();
  FUN_00d50b00();
  local_60 = '\x01';
  local_68 = (longlong *)(unaff_RDI + 0x168);
  FUN_00cbb340();
  if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
    (**(code **)(*local_68 + 0x10))();
    FUN_00d50b20();
  }
  FUN_01989e30();
  return;
}


