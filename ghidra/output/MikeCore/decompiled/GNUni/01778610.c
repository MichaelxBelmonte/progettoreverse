// Function: FUN_01778610
// Address: 01778610
// Size: 787 bytes
// Class: GNUni


void FUN_01778610(pthread_key_t param_1)

{
  double dVar1;
  void *pvVar2;
  longlong lVar3;
  pthread_key_t pVar4;
  char *pcVar5;
  longlong *plVar6;
  longlong unaff_RDI;
  longlong local_50;
  char local_48;
  longlong local_40;
  char local_38 [8];
  char local_30 [8];
  
  *(undefined1 *)(unaff_RDI + 0x60) = 0;
  if (*(longlong *)(unaff_RDI + 0x40) != 0) {
    FUN_00d50b00();
    FUN_01778a40();
    if ((local_38[0] == '\0') && (local_40 != 0)) {
      FUN_00d50b00();
    }
    FUN_00d50b20();
    FUN_01778fe0();
    lVar3 = *(longlong *)(unaff_RDI + 0x48);
    if (lVar3 == local_40) {
      if ((local_38[0] != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      if ((local_38[0] == '\0') && (local_40 != 0)) {
        FUN_00d50b00();
        lVar3 = *(longlong *)(unaff_RDI + 0x48);
      }
      *(longlong *)(unaff_RDI + 0x48) = local_40;
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
    }
    plVar6 = *(longlong **)(unaff_RDI + 0x48);
    pvVar2 = _pthread_getspecific(param_1);
    if (pvVar2 != (void *)0x0) {
      plVar6 = *(longlong **)(unaff_RDI + 0x48);
      lVar3 = FUN_00e8b990();
      if (lVar3 != 0) {
        plVar6 = (longlong *)plVar6[(ulonglong)(*(uint *)(lVar3 + 0x154) & 1) + 4];
      }
    }
    (**(code **)(*plVar6 + 0x378))();
    lVar3 = *(longlong *)(unaff_RDI + 0x50);
    if (lVar3 != local_40) {
      if (local_38[0] == '\0') {
        if (local_40 == 0) {
          *(undefined8 *)(unaff_RDI + 0x50) = 0;
        }
        else {
          FUN_00d50b00();
          lVar3 = *(longlong *)(unaff_RDI + 0x50);
          *(longlong *)(unaff_RDI + 0x50) = local_40;
        }
      }
      else {
        local_38[0] = '\0';
        *(longlong *)(unaff_RDI + 0x50) = local_40;
      }
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
    }
    if ((local_38[0] != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if (*(longlong *)(unaff_RDI + 0x50) == 0) {
      *(undefined8 *)(unaff_RDI + 0x58) = 0x4628c00044960000;
    }
    else {
      pvVar2 = _pthread_getspecific(param_1);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_013f2b00();
      pvVar2 = _pthread_getspecific(param_1);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      dVar1 = (double)FUN_013faed0();
      *(float *)(unaff_RDI + 0x58) = (float)dVar1;
      if ((local_38[0] != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      pvVar2 = _pthread_getspecific(param_1);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_013f2b00();
      FUN_00d23340();
      pVar4 = CONCAT31((int3)(param_1 >> 8),local_38[0]);
      pcVar5 = local_30;
      if (local_38[0] != '\0') {
        pcVar5 = local_38;
      }
      local_30[0] = local_38[0];
      *pcVar5 = '\0';
      if ((local_38[0] != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      pvVar2 = _pthread_getspecific(pVar4);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      dVar1 = (double)FUN_013faed0();
      *(float *)(unaff_RDI + 0x5c) = (float)dVar1;
      if ((local_30[0] != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      if ((local_48 != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
    }
    if (local_40 != 0) {
      FUN_00d50b20();
    }
  }
  return;
}


