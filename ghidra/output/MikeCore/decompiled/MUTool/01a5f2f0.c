// Function: FUN_01a5f2f0
// Address: 01a5f2f0
// Size: 1878 bytes
// Class: MUTool


/* WARNING: Removing unreachable block (ram,0x01a5f673) */
/* WARNING: Removing unreachable block (ram,0x01a5f50f) */
/* WARNING: Removing unreachable block (ram,0x01a5f3b6) */
/* WARNING: Removing unreachable block (ram,0x01a5f3c2) */
/* WARNING: Removing unreachable block (ram,0x01a5f51b) */
/* WARNING: Removing unreachable block (ram,0x01a5f67f) */

void FUN_01a5f2f0(pthread_key_t param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  void *pvVar4;
  pthread_key_t pVar5;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  bool bVar6;
  longlong local_e0;
  char local_d8;
  longlong local_d0;
  char local_c8;
  longlong local_c0;
  char local_b8;
  longlong *local_b0;
  char local_a8;
  longlong *local_a0;
  char local_98;
  longlong *local_90;
  char local_88;
  longlong *local_80;
  char local_78;
  longlong *local_70;
  char local_68;
  longlong *local_60;
  char local_58;
  longlong *local_50;
  char local_48;
  longlong local_40;
  char local_38;
  
  if (*(longlong *)(unaff_RDI + 0x170) != 0) {
    pvVar4 = _pthread_getspecific(param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    plVar1 = (longlong *)(unaff_RDI + 0x168);
    local_98 = 0;
    (**(code **)(*(longlong *)(unaff_RDI + 0x168) + 0x10))();
    FUN_00d50b00();
    local_98 = '\x01';
    local_a0 = plVar1;
    FUN_00e8b9a0();
    if ((local_98 != '\0') && (local_a0 != (longlong *)0x0)) {
      (**(code **)(*local_a0 + 0x10))();
      FUN_00d50b20();
    }
    pvVar4 = _pthread_getspecific(param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012dff00();
    lVar2 = local_40;
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if (lVar2 != 0) {
      pvVar4 = _pthread_getspecific(param_1);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012dff00();
      pvVar4 = _pthread_getspecific(param_1);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      local_88 = 0;
      (**(code **)(*plVar1 + 0x10))();
      FUN_00d50b00();
      local_88 = '\x01';
      local_90 = plVar1;
      FUN_00e8b9a0();
      if ((local_88 != '\0') && (local_90 != (longlong *)0x0)) {
        (**(code **)(*local_90 + 0x10))();
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
    }
    pvVar4 = _pthread_getspecific(param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012dff70();
    lVar3 = local_40;
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if (lVar3 != 0) {
      pvVar4 = _pthread_getspecific(param_1);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012dff70();
      pvVar4 = _pthread_getspecific(param_1);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      local_78 = 0;
      (**(code **)(*plVar1 + 0x10))();
      FUN_00d50b00();
      local_78 = '\x01';
      local_80 = plVar1;
      FUN_00e8b9a0();
      if ((local_78 != '\0') && (local_80 != (longlong *)0x0)) {
        (**(code **)(*local_80 + 0x10))();
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      if (lVar2 != 0) goto LAB_01a5f6fd;
    }
    local_68 = 0;
    (**(code **)(*plVar1 + 0x10))();
    FUN_00d50b00();
    local_68 = '\x01';
    local_70 = plVar1;
    FUN_00cbb340();
    if ((local_68 != '\0') && (local_70 != (longlong *)0x0)) {
      (**(code **)(*local_70 + 0x10))();
      FUN_00d50b20();
    }
  }
LAB_01a5f6fd:
  lVar2 = *unaff_RSI;
  lVar3 = *(longlong *)(unaff_RDI + 0x170);
  if (lVar3 != lVar2) {
    if (lVar2 != 0) {
      FUN_00d50b00();
    }
    *(longlong *)(unaff_RDI + 0x170) = lVar2;
    bVar6 = lVar3 != 0;
    lVar3 = lVar2;
    if (bVar6) {
      FUN_00d50b20();
      lVar3 = *(longlong *)(unaff_RDI + 0x170);
    }
  }
  if (lVar3 != 0) {
    pvVar4 = _pthread_getspecific(param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    plVar1 = (longlong *)(unaff_RDI + 0x168);
    local_58 = 0;
    (**(code **)(*(longlong *)(unaff_RDI + 0x168) + 0x10))();
    FUN_00d50b00();
    local_58 = '\x01';
    local_e0 = 0;
    local_d8 = '\0';
    pVar5 = 0x20;
    local_60 = plVar1;
    FUN_00e8b850(0x20,&local_e0);
    if ((local_d8 != '\0') && (local_e0 != 0)) {
      FUN_00d50b20();
    }
    if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
      (**(code **)(*local_60 + 0x10))();
      FUN_00d50b20();
    }
    pvVar4 = _pthread_getspecific(pVar5);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012dff00();
    pvVar4 = _pthread_getspecific(pVar5);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_48 = 0;
    (**(code **)(*plVar1 + 0x10))();
    FUN_00d50b00();
    local_48 = '\x01';
    local_d0 = 0;
    local_c8 = '\0';
    pVar5 = 0x20;
    local_50 = plVar1;
    FUN_00e8b850(0x20,&local_d0);
    if ((local_c8 != '\0') && (local_d0 != 0)) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
      (**(code **)(*local_50 + 0x10))();
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    pvVar4 = _pthread_getspecific(pVar5);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012dff70();
    pvVar4 = _pthread_getspecific(pVar5);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_a8 = 0;
    (**(code **)(*plVar1 + 0x10))();
    FUN_00d50b00();
    local_a8 = '\x01';
    local_c0 = 0;
    local_b8 = '\0';
    local_b0 = plVar1;
    FUN_00e8b850(0x20,&local_c0);
    if ((local_b8 != '\0') && (local_c0 != 0)) {
      FUN_00d50b20();
    }
    if ((local_a8 != '\0') && (local_b0 != (longlong *)0x0)) {
      (**(code **)(*local_b0 + 0x10))();
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  return;
}


