// Function: FUN_0164e420
// Address: 0164e420
// Size: 951 bytes
// Class: MULSSGenerator


/* WARNING: Removing unreachable block (ram,0x0164e510) */
/* WARNING: Removing unreachable block (ram,0x0164e6f0) */
/* WARNING: Removing unreachable block (ram,0x0164e4e8) */
/* WARNING: Removing unreachable block (ram,0x0164e6c6) */

void FUN_0164e420(pthread_key_t param_1,undefined1 param_2)

{
  int iVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  void *pvVar5;
  longlong lVar6;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  longlong local_58;
  char local_50;
  int local_40;
  
  lVar2 = *(longlong *)(unaff_RDI + 0xa8);
  if (lVar2 != 0) {
    FUN_00d50b00();
  }
  if (lVar2 != *unaff_RSI) {
    lVar6 = *(longlong *)(unaff_RDI + 0x98);
    if (lVar6 != 0) {
      local_50 = '\0';
      local_58 = 0;
      local_40 = -1;
      while( true ) {
        lVar4 = (longlong)local_40;
        local_40 = local_40 + 1;
        if (*(int *)(lVar6 + 0xc) <= local_40) break;
        local_58 = *(longlong *)(*(longlong *)(lVar6 + 0x10) + 8 + lVar4 * 8);
        pvVar5 = _pthread_getspecific((pthread_key_t)*(longlong *)(lVar6 + 0x10));
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01658a40();
      }
      FUN_00277f20();
      param_1 = (pthread_key_t)lVar6;
    }
    if (lVar2 != 0) {
      FUN_01849e20();
      pvVar5 = _pthread_getspecific(param_1);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01505de0();
    }
    FUN_00d64850();
    lVar6 = *unaff_RSI;
    lVar4 = *(longlong *)(unaff_RDI + 0xa8);
    if (lVar4 != lVar6) {
      if (lVar6 != 0) {
        FUN_00d50b00();
      }
      *(longlong *)(unaff_RDI + 0xa8) = lVar6;
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
    }
    FUN_00d64910();
    if (lVar2 != 0) {
      pvVar5 = _pthread_getspecific(param_1);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_00d50130();
    }
    if (*unaff_RSI != 0) {
      FUN_01650500();
      lVar6 = *(longlong *)(unaff_RDI + 0x98);
      if (lVar6 != 0) {
        local_50 = '\0';
        local_58 = 0;
        local_40 = -1;
        while( true ) {
          lVar4 = (longlong)local_40;
          local_40 = local_40 + 1;
          if (*(int *)(lVar6 + 0xc) <= local_40) break;
          local_58 = *(longlong *)(*(longlong *)(lVar6 + 0x10) + 8 + lVar4 * 8);
          pvVar5 = _pthread_getspecific((pthread_key_t)*(longlong *)(lVar6 + 0x10));
          if (pvVar5 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_01658a70(param_2,1);
        }
        FUN_00277f20();
        param_1 = (pthread_key_t)lVar6;
      }
      cVar3 = FUN_01733c10();
      if (cVar3 != '\0') {
        if (*(longlong *)(unaff_RDI + 0x90) == 0) goto LAB_0164e7e9;
        pvVar5 = _pthread_getspecific(param_1);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_016678c0();
        iVar1 = *(int *)(local_58 + 0xc);
        if (local_50 != '\0') {
          FUN_00d50b20();
        }
        if (iVar1 < 2) goto LAB_0164e7e9;
      }
      pvVar5 = _pthread_getspecific(param_1);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01660830();
      FUN_016818b0();
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
    }
  }
LAB_0164e7e9:
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  return;
}


