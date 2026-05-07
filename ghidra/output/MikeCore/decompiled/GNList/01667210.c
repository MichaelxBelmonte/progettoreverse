// Function: FUN_01667210
// Address: 01667210
// Size: 896 bytes
// Class: GNList


/* WARNING: Removing unreachable block (ram,0x016673f7) */
/* WARNING: Removing unreachable block (ram,0x01667400) */
/* WARNING: Removing unreachable block (ram,0x016674b0) */
/* WARNING: Removing unreachable block (ram,0x01667337) */
/* WARNING: Removing unreachable block (ram,0x01667360) */
/* WARNING: Removing unreachable block (ram,0x01667339) */
/* WARNING: Removing unreachable block (ram,0x01667362) */
/* WARNING: Removing unreachable block (ram,0x0166748c) */

void FUN_01667210(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  char cVar4;
  void *pvVar5;
  longlong lVar6;
  longlong lVar7;
  pthread_key_t pVar8;
  longlong *plVar9;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  longlong local_98;
  char local_90;
  int local_80;
  longlong *local_70;
  char local_68;
  int local_58;
  
  pVar8 = (pthread_key_t)param_1;
  lVar1 = *(longlong *)(unaff_RDI + 0x130);
  if (lVar1 != *unaff_RSI) {
    if (lVar1 != 0) {
      FUN_00d50b00();
      FUN_01849e20();
      pvVar5 = _pthread_getspecific((pthread_key_t)param_1);
      if ((pvVar5 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
        param_1 = lVar1;
      }
      pVar8 = (pthread_key_t)param_1;
      FUN_01505de0();
    }
    FUN_00d64850();
    lVar6 = *unaff_RSI;
    lVar7 = *(longlong *)(unaff_RDI + 0x130);
    if (lVar7 != lVar6) {
      if (lVar6 != 0) {
        FUN_00d50b00();
      }
      *(longlong *)(unaff_RDI + 0x130) = lVar6;
      if (lVar7 != 0) {
        FUN_00d50b20();
      }
    }
    FUN_00d64910();
    if (*unaff_RSI != 0) {
      FUN_01667cd0();
      lVar6 = *(longlong *)(unaff_RDI + 0xa8);
      if (lVar6 != 0) {
        local_90 = '\0';
        local_98 = 0;
        local_80 = -1;
LAB_01667333:
        while( true ) {
          plVar3 = local_70;
          lVar7 = (longlong)local_80;
          local_80 = local_80 + 1;
          if (*(int *)(lVar6 + 0xc) <= local_80) break;
          local_98 = *(longlong *)(*(longlong *)(lVar6 + 0x10) + 8 + lVar7 * 8);
          pvVar5 = _pthread_getspecific((pthread_key_t)*(longlong *)(lVar6 + 0x10));
          if (pvVar5 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0164fea0();
          if (local_68 == '\0') goto LAB_016673e0;
          if (local_70 != (longlong *)0x0) goto LAB_01667410;
        }
        FUN_0049cc10();
        pVar8 = (pthread_key_t)lVar6;
      }
      cVar4 = FUN_0167b240();
      if (cVar4 != '\0') {
        FUN_016676f0();
        if ((local_90 == '\0') && (local_98 != 0)) {
          FUN_00d50b00();
        }
        FUN_01849c50();
        if (local_98 != 0) {
          FUN_00d50b20();
        }
      }
    }
    if (lVar1 != 0) {
      pvVar5 = _pthread_getspecific(pVar8);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_00d50130();
      FUN_00d50b20();
    }
  }
  return;
LAB_016673e0:
  if (local_70 != (longlong *)0x0) {
    FUN_00d50b00();
LAB_01667410:
    local_68 = '\0';
    local_70 = (longlong *)0x0;
    local_58 = -1;
    while( true ) {
      lVar7 = (longlong)local_58;
      local_58 = local_58 + 1;
      if (*(int *)((longlong)plVar3 + 0xc) <= local_58) break;
      lVar2 = plVar3[2];
      local_70 = *(longlong **)(lVar2 + 8 + lVar7 * 8);
      pvVar5 = _pthread_getspecific((pthread_key_t)lVar2);
      plVar9 = local_70;
      if ((pvVar5 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
        plVar9 = (longlong *)local_70[(ulonglong)(*(uint *)(lVar7 + 0x154) & 1) + 4];
      }
      (**(code **)(*plVar9 + 0x378))();
    }
    FUN_00277f20();
    FUN_00d50b20();
  }
  goto LAB_01667333;
}


