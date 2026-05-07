// Function: FUN_0128c620
// Address: 0128c620
// Size: 1035 bytes
// Class: Unknown


/* WARNING: Removing unreachable block (ram,0x0128c98b) */
/* WARNING: Removing unreachable block (ram,0x0128c994) */
/* WARNING: Removing unreachable block (ram,0x0128c9d0) */
/* WARNING: Removing unreachable block (ram,0x0128c9d9) */
/* WARNING: Removing unreachable block (ram,0x0128ca14) */
/* WARNING: Removing unreachable block (ram,0x0128ca21) */

void FUN_0128c620(pthread_key_t param_1)

{
  void *pvVar1;
  longlong unaff_RDI;
  bool bVar2;
  longlong local_b0;
  char local_a8;
  longlong local_a0;
  char local_98;
  longlong local_90;
  char local_88;
  longlong local_60;
  char local_58;
  longlong local_50;
  char local_48;
  longlong local_30;
  char local_28;
  
  if (*(longlong *)(unaff_RDI + 0x100) == 0) {
    local_28 = '\0';
    local_30 = 0;
  }
  else {
    pvVar1 = _pthread_getspecific(param_1);
    if (pvVar1 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012e8920();
    if (local_30 != 0) {
      if (*(longlong *)(unaff_RDI + 0x100) == 0) {
        local_58 = '\0';
        local_60 = 0;
      }
      else {
        pvVar1 = _pthread_getspecific(param_1);
        if (pvVar1 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012e8920();
      }
      pvVar1 = _pthread_getspecific(param_1);
      if (pvVar1 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012cade0();
      if (local_a0 == 0) {
        bVar2 = false;
      }
      else {
        if (*(longlong *)(unaff_RDI + 0x100) == 0) {
          local_48 = '\0';
          local_50 = 0;
        }
        else {
          pvVar1 = _pthread_getspecific(param_1);
          if (pvVar1 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_012e8920();
        }
        pvVar1 = _pthread_getspecific(param_1);
        if (pvVar1 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012cade0();
        pvVar1 = _pthread_getspecific(param_1);
        if (pvVar1 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_015058d0();
        bVar2 = local_b0 != 0;
        if ((local_a8 != '\0') && (local_b0 != 0)) {
          FUN_00d50b20();
        }
        if ((local_88 != '\0') && (local_90 != 0)) {
          FUN_00d50b20();
        }
        if ((local_48 != '\0') && (local_50 != 0)) {
          FUN_00d50b20();
        }
      }
      if ((local_98 != '\0') && (local_a0 != 0)) {
        FUN_00d50b20();
      }
      if ((local_58 != '\0') && (local_60 != 0)) {
        FUN_00d50b20();
      }
      goto LAB_0128c89a;
    }
  }
  bVar2 = false;
LAB_0128c89a:
  if ((local_28 != '\0') && (local_30 != 0)) {
    FUN_00d50b20();
  }
  if (bVar2) {
    FUN_00d50b00();
    FUN_0039e8b0();
    if (local_28 == '\0') {
      if (local_30 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_28 = '\0';
    }
    if (unaff_RDI != 0) {
      FUN_00d50b20();
    }
    pvVar1 = _pthread_getspecific(param_1);
    if (pvVar1 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012e7fb0();
    pvVar1 = _pthread_getspecific(param_1);
    if (pvVar1 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0150ddd0();
    if ((local_28 != '\0') && (local_30 != 0)) {
      FUN_00d50b20();
    }
    FUN_00e7bdb0();
    FUN_01287c80();
    if (local_30 != 0) {
      FUN_00d50b20();
    }
  }
  return;
}


