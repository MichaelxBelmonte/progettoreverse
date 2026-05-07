// Function: FUN_002c95a0
// Address: 002c95a0
// Size: 784 bytes
// Class: MUAudioFileSource


/* WARNING: Removing unreachable block (ram,0x002c9866) */
/* WARNING: Removing unreachable block (ram,0x002c9619) */
/* WARNING: Removing unreachable block (ram,0x002c9640) */
/* WARNING: Removing unreachable block (ram,0x002c961b) */
/* WARNING: Removing unreachable block (ram,0x002c9644) */

longlong * FUN_002c95a0(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  void *pvVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong unaff_RSI;
  longlong *unaff_RDI;
  longlong lVar8;
  longlong *local_98;
  char local_90;
  longlong local_88;
  char local_80;
  int local_40;
  
  lVar1 = *(longlong *)(unaff_RSI + 0xe0);
  if (lVar1 == 0) {
LAB_002c988e:
    *(undefined1 *)(unaff_RDI + 1) = 0;
    *unaff_RDI = 0;
    return unaff_RDI;
  }
  local_40 = -1;
  do {
    while( true ) {
      lVar6 = (longlong)local_40;
      local_40 = local_40 + 1;
      if (*(int *)(lVar1 + 0xc) <= local_40) {
        FUN_002d7300();
        lVar1 = *(longlong *)(unaff_RSI + 0xe0);
        if (lVar1 == 0) goto LAB_002c988e;
        lVar8 = 0;
        goto LAB_002c96ec;
      }
      lVar6 = *(longlong *)(*(longlong *)(lVar1 + 0x10) + 8 + lVar6 * 8);
      lVar8 = *(longlong *)(lVar6 + 0x10);
      if (lVar8 == 0) break;
      FUN_00d50b00();
      lVar2 = *param_2;
      FUN_00d50b20();
      if (lVar8 == lVar2) goto LAB_002c9858;
    }
  } while (*param_2 != 0);
LAB_002c9858:
  *(undefined1 *)(unaff_RDI + 1) = 0;
  if (lVar6 != 0) {
    FUN_00d50b00();
  }
  *unaff_RDI = lVar6;
  goto LAB_002c98b2;
  while( true ) {
    lVar2 = *(longlong *)(*(longlong *)(lVar1 + 0x10) + lVar8 * 8);
    if (*(longlong *)(lVar2 + 0x18) == 0) {
      plVar7 = *(longlong **)(lVar2 + 0x10);
      pvVar4 = _pthread_getspecific((pthread_key_t)lVar6);
      if (pvVar4 != (void *)0x0) {
        plVar7 = *(longlong **)(lVar2 + 0x10);
        lVar5 = FUN_00e8b990();
        if (lVar5 != 0) {
          plVar7 = (longlong *)plVar7[(ulonglong)(*(uint *)(lVar5 + 0x154) & 1) + 4];
        }
      }
      (**(code **)(*plVar7 + 0x478))();
    }
    else {
      FUN_00b88600();
    }
    plVar7 = (longlong *)*param_2;
    pvVar4 = _pthread_getspecific((pthread_key_t)lVar6);
    if (pvVar4 != (void *)0x0) {
      plVar7 = (longlong *)*param_2;
      lVar5 = FUN_00e8b990();
      if (lVar5 != 0) {
        plVar7 = (longlong *)plVar7[(ulonglong)(*(uint *)(lVar5 + 0x154) & 1) + 4];
      }
    }
    (**(code **)(*plVar7 + 0x478))();
    if (local_80 == '\0') {
      if (local_88 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_80 = '\0';
    }
    cVar3 = (**(code **)(*local_98 + 0x50))();
    if (local_88 != 0) {
      FUN_00d50b20();
    }
    if ((local_80 != '\0') && (local_88 != 0)) {
      FUN_00d50b20();
    }
    if ((local_90 != '\0') && (local_98 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    lVar8 = lVar8 + 1;
    if (cVar3 != '\0') break;
LAB_002c96ec:
    if (*(int *)(lVar1 + 0xc) <= (int)lVar8) {
      FUN_002d7300();
      goto LAB_002c988e;
    }
  }
  *(undefined1 *)(unaff_RDI + 1) = 0;
  FUN_00d50b00();
  *unaff_RDI = lVar2;
LAB_002c98b2:
  *(undefined1 *)(unaff_RDI + 1) = 1;
  FUN_002d7300();
  return unaff_RDI;
}


