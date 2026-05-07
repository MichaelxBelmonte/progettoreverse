// Function: FUN_002c2710
// Address: 002c2710
// Size: 572 bytes
// Class: GNImage


/* WARNING: Removing unreachable block (ram,0x002c28fe) */
/* WARNING: Removing unreachable block (ram,0x002c2907) */

void FUN_002c2710(pthread_key_t param_1)

{
  char cVar1;
  byte bVar2;
  void *pvVar3;
  longlong lVar4;
  uint uVar5;
  longlong *plVar6;
  longlong unaff_RDI;
  longlong *local_a0;
  char local_98;
  longlong *local_90;
  char local_88;
  longlong *local_80;
  char local_78;
  longlong *local_70;
  char local_68;
  longlong *local_50;
  char local_48;
  longlong local_40;
  char local_38;
  
  if (*(longlong *)(unaff_RDI + 0x18) == 0) {
    plVar6 = *(longlong **)(unaff_RDI + 0x10);
    pvVar3 = _pthread_getspecific(param_1);
    if (pvVar3 != (void *)0x0) {
      plVar6 = *(longlong **)(unaff_RDI + 0x10);
      lVar4 = FUN_00e8b990();
      if (lVar4 != 0) {
        plVar6 = (longlong *)plVar6[(ulonglong)(*(uint *)(lVar4 + 0x154) & 1) + 4];
      }
    }
    (**(code **)(*plVar6 + 0x478))();
  }
  else {
    FUN_00b88600();
  }
  (**(code **)(*local_70 + 0x3f0))();
  cVar1 = (**(code **)(*local_a0 + 0x50))();
  uVar5 = 0;
  if (cVar1 != '\0') {
    if (*(longlong *)(unaff_RDI + 0x18) == 0) {
      plVar6 = *(longlong **)(unaff_RDI + 0x10);
      pvVar3 = _pthread_getspecific(param_1);
      if (pvVar3 != (void *)0x0) {
        plVar6 = *(longlong **)(unaff_RDI + 0x10);
        lVar4 = FUN_00e8b990();
        if (lVar4 != 0) {
          plVar6 = (longlong *)plVar6[(ulonglong)(*(uint *)(lVar4 + 0x154) & 1) + 4];
        }
      }
      (**(code **)(*plVar6 + 0x478))();
    }
    else {
      FUN_00b88600();
    }
    (**(code **)(*local_50 + 0x3f0))();
    FUN_01f27fe0();
    (**(code **)(*local_80 + 0x760))();
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    bVar2 = (**(code **)(*local_90 + 0x50))();
    if (local_40 != 0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if ((local_78 != '\0') && (local_80 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_88 != '\0') && (local_90 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    uVar5 = (uint)(bVar2 ^ 1);
  }
  if ((local_98 != '\0') && (local_a0 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_68 != '\0') && (local_70 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  *(uint *)(unaff_RDI + 0x20) = uVar5;
  return;
}


