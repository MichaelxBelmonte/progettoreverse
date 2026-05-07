// Function: FUN_012f9cd0
// Address: 012f9cd0
// Size: 836 bytes
// Class: MULSSGenerator


/* WARNING: Removing unreachable block (ram,0x012f9db3) */
/* WARNING: Removing unreachable block (ram,0x012f9dbc) */
/* WARNING: Removing unreachable block (ram,0x012f9eef) */
/* WARNING: Removing unreachable block (ram,0x012f9ef8) */
/* WARNING: Removing unreachable block (ram,0x012f9f9c) */
/* WARNING: Removing unreachable block (ram,0x012f9fa5) */

void FUN_012f9cd0(pthread_key_t param_1)

{
  longlong lVar1;
  char cVar2;
  void *pvVar3;
  longlong unaff_RDI;
  int iVar4;
  longlong local_40;
  char local_38;
  
  lVar1 = *(longlong *)(unaff_RDI + 0xb0);
  if (lVar1 != 0) {
    if (0 < *(int *)(lVar1 + 0xc)) {
      iVar4 = 0;
      do {
        pvVar3 = _pthread_getspecific(param_1);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01274b60();
        if (local_38 == '\0') {
          if (local_40 != 0) {
            FUN_00d50b00();
            goto LAB_012f9dd0;
          }
        }
        else if (local_40 != 0) {
LAB_012f9dd0:
          pvVar3 = _pthread_getspecific(param_1);
          if (pvVar3 != (void *)0x0) {
            FUN_00e8b990();
          }
          cVar2 = FUN_0129a470();
          if (cVar2 != '\0') {
            pvVar3 = _pthread_getspecific(param_1);
            if (pvVar3 != (void *)0x0) {
              FUN_00e8b990();
            }
            pvVar3 = _pthread_getspecific(param_1);
            if (pvVar3 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_0125a2c0();
            FUN_012595a0();
            pvVar3 = _pthread_getspecific(param_1);
            if (pvVar3 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_0128c200();
            if ((local_38 == '\0') && (local_40 != 0)) {
              FUN_00d50b00();
            }
            pvVar3 = _pthread_getspecific(param_1);
            if (pvVar3 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_0128c200();
            if (local_38 == '\0') {
              if (local_40 != 0) {
                FUN_00d50b00();
                goto LAB_012f9f42;
              }
            }
            else {
LAB_012f9f42:
              if ((local_40 != 0) && (local_40 != 0)) {
                pvVar3 = _pthread_getspecific(param_1);
                if (pvVar3 != (void *)0x0) {
                  FUN_00e8b990();
                }
                pvVar3 = _pthread_getspecific(param_1);
                if (pvVar3 != (void *)0x0) {
                  FUN_00e8b990();
                }
                FUN_01507f00();
                FUN_01508220();
              }
              if (local_40 != 0) {
                FUN_00d50b20();
              }
            }
            if (local_40 != 0) {
              FUN_00d50b20();
            }
          }
          FUN_00d50b20();
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < *(int *)(lVar1 + 0xc));
    }
    FUN_001159b0();
  }
  return;
}


