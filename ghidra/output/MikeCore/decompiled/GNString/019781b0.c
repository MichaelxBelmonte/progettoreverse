// Function: FUN_019781b0
// Address: 019781b0
// Size: 705 bytes
// Class: GNString


/* WARNING: Removing unreachable block (ram,0x01978255) */
/* WARNING: Removing unreachable block (ram,0x0197825e) */

void FUN_019781b0(pthread_key_t param_1)

{
  longlong lVar1;
  longlong lVar2;
  void *pvVar3;
  longlong lVar4;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  longlong local_58;
  char local_50;
  longlong local_48;
  char local_40;
  longlong *local_38;
  char local_30;
  
  if (*(longlong *)(unaff_RDI + 0x178) != 0) {
    pvVar3 = _pthread_getspecific(param_1);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_30 = 0;
    (**(code **)(*(longlong *)(unaff_RDI + 0x168) + 0x10))();
    FUN_00d50b00();
    local_30 = '\x01';
    local_38 = (longlong *)(unaff_RDI + 0x168);
    FUN_00e8b9a0();
    if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
      (**(code **)(*local_38 + 0x10))();
      FUN_00d50b20();
    }
  }
  if (*(longlong *)(unaff_RDI + 0x178) != 0) {
    *(undefined8 *)(unaff_RDI + 0x178) = 0;
    FUN_00d50b20();
  }
  lVar1 = *unaff_RSI;
  lVar4 = *(longlong *)(unaff_RDI + 0x170);
  lVar2 = lVar4;
  if (lVar4 != lVar1) {
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    *(longlong *)(unaff_RDI + 0x170) = lVar1;
    lVar2 = lVar1;
    if (lVar4 != 0) {
      FUN_00d50b20();
      lVar2 = *(longlong *)(unaff_RDI + 0x170);
    }
  }
  if (lVar2 == 0) goto LAB_019783a1;
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0152ebe0();
  lVar1 = *(longlong *)(unaff_RDI + 0x178);
  lVar4 = lVar1;
  if (lVar1 != local_48) {
    if (local_40 == '\0') {
      if (local_48 == 0) {
        lVar4 = 0;
        goto LAB_0197833c;
      }
      FUN_00d50b00();
      lVar1 = *(longlong *)(unaff_RDI + 0x178);
      *(longlong *)(unaff_RDI + 0x178) = local_48;
      lVar4 = local_48;
    }
    else {
      local_40 = '\0';
      lVar4 = local_48;
LAB_0197833c:
      *(longlong *)(unaff_RDI + 0x178) = lVar4;
    }
    param_1 = (pthread_key_t)lVar1;
    if (lVar1 != 0) {
      FUN_00d50b20();
      lVar4 = local_48;
    }
  }
  if ((local_40 != '\0') && (lVar4 != 0)) {
    FUN_00d50b20();
  }
LAB_019783a1:
  if (*(longlong *)(unaff_RDI + 0x178) != 0) {
    pvVar3 = _pthread_getspecific(param_1);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    (**(code **)(*(longlong *)(unaff_RDI + 0x168) + 0x10))();
    FUN_00d50b00();
    local_58 = 0;
    local_50 = '\0';
    FUN_00e8b850(0x20,&local_58);
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    if ((longlong *)(unaff_RDI + 0x168) != (longlong *)0x0) {
      (**(code **)(*(longlong *)(unaff_RDI + 0x168) + 0x10))();
      FUN_00d50b20();
    }
  }
  return;
}


