// Function: FUN_012f8840
// Address: 012f8840
// Size: 516 bytes
// Class: MULSSGenerator


longlong * FUN_012f8840(char *param_1)

{
  longlong lVar1;
  void *pvVar2;
  char *pcVar3;
  longlong unaff_RSI;
  longlong *unaff_RDI;
  int iVar4;
  longlong lVar5;
  longlong local_58;
  char local_50 [8];
  char local_40;
  char local_38;
  
  lVar1 = *(longlong *)(unaff_RSI + 0xb0);
  if (lVar1 == 0) {
    *(undefined1 *)(unaff_RDI + 1) = 0;
    local_40 = '\0';
    lVar5 = 0;
  }
  else {
    FUN_00d50b00();
    if (*(int *)(lVar1 + 0xc) < 1) {
      local_40 = '\0';
      lVar5 = 0;
    }
    else {
      iVar4 = 0;
      lVar5 = 0;
      local_40 = '\0';
      do {
        pvVar2 = _pthread_getspecific((pthread_key_t)param_1);
        if (pvVar2 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0126ef70();
        local_38 = local_50[0];
        param_1 = &stack0xffffffffffffffc8;
        pcVar3 = local_50;
        if (local_50[0] == '\0') {
          pcVar3 = param_1;
        }
        *pcVar3 = '\0';
        if ((local_50[0] != '\0') && (local_58 != 0)) {
          FUN_00d50b20();
        }
        if (local_58 != 0) {
          if (lVar5 == 0) {
            lVar5 = local_58;
            if (local_38 != '\0') {
              local_40 = '\x01';
              goto LAB_012f88d0;
            }
            FUN_00d50b00();
            local_40 = '\x01';
          }
          else if (local_58 != lVar5) {
            *(undefined1 *)(unaff_RDI + 1) = 0;
            *unaff_RDI = 0;
            if (local_38 != '\0') {
              FUN_00d50b20();
            }
            FUN_001159b0();
            FUN_00d50b20();
            goto LAB_012f89f0;
          }
          if (local_38 != '\0') {
            FUN_00d50b20();
          }
        }
LAB_012f88d0:
        iVar4 = iVar4 + 1;
      } while (iVar4 < *(int *)(lVar1 + 0xc));
    }
    FUN_001159b0();
    FUN_00d50b20();
    *(undefined1 *)(unaff_RDI + 1) = 0;
    if ((local_40 != '\0') && (lVar5 != 0)) {
      FUN_00d50b00();
    }
  }
  *unaff_RDI = lVar5;
  *(char *)(unaff_RDI + 1) = local_40;
LAB_012f89f0:
  if ((local_40 != '\0') && (lVar5 != 0)) {
    FUN_00d50b20();
  }
  return unaff_RDI;
}


