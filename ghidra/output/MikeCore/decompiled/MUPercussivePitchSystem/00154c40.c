// Function: FUN_00154c40
// Address: 00154c40
// Size: 760 bytes
// Class: MUPercussivePitchSystem


/* WARNING: Removing unreachable block (ram,0x00154ce9) */
/* WARNING: Removing unreachable block (ram,0x00154cf5) */
/* WARNING: Removing unreachable block (ram,0x00154de3) */
/* WARNING: Removing unreachable block (ram,0x00154dec) */
/* WARNING: Removing unreachable block (ram,0x00154e27) */
/* WARNING: Removing unreachable block (ram,0x00154e50) */
/* WARNING: Removing unreachable block (ram,0x00154e29) */
/* WARNING: Removing unreachable block (ram,0x00154e52) */

void FUN_00154c40(pthread_key_t param_1)

{
  longlong lVar1;
  longlong lVar2;
  void *pvVar3;
  longlong lVar4;
  longlong unaff_RDI;
  pthread_key_t pVar5;
  longlong local_98;
  char local_90;
  longlong local_70;
  char local_68;
  longlong local_58;
  char local_50;
  int local_40;
  
  FUN_00155070();
  if (*(longlong *)(unaff_RDI + 0x88) != 0) {
    pvVar3 = _pthread_getspecific(param_1);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012e5ae0();
    if (local_90 == '\0') {
      if (local_98 == 0) {
        return;
      }
      FUN_00d50b00();
    }
    else if (local_98 == 0) {
      return;
    }
    if (0 < *(int *)(local_98 + 0xc)) {
      pVar5 = 0;
      do {
        lVar2 = local_58;
        pvVar3 = _pthread_getspecific(pVar5);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01265b80();
        if (local_50 == '\0') {
          if (local_58 != 0) {
            FUN_00d50b00();
            goto LAB_00154df4;
          }
        }
        else if (local_58 != 0) {
LAB_00154df4:
          local_50 = '\0';
          local_58 = 0;
          local_40 = -1;
          while( true ) {
            lVar4 = (longlong)local_40;
            local_40 = local_40 + 1;
            if (*(int *)(lVar2 + 0xc) <= local_40) break;
            lVar1 = *(longlong *)(lVar2 + 0x10);
            local_58 = *(longlong *)(lVar1 + 8 + lVar4 * 8);
            pvVar3 = _pthread_getspecific((pthread_key_t)lVar1);
            if (pvVar3 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_011ef640();
            if (local_68 == '\0') {
              if (local_70 != 0) {
                FUN_00d50b00();
              }
            }
            else {
              local_68 = '\0';
            }
            FUN_00155200();
            if (local_70 != 0) {
              FUN_00d50b20();
            }
            if ((local_68 != '\0') && (local_70 != 0)) {
              FUN_00d50b20();
            }
          }
          FUN_0015edf0();
          FUN_00d50b20();
        }
        pVar5 = pVar5 + 1;
      } while ((int)pVar5 < *(int *)(local_98 + 0xc));
    }
    FUN_001159b0();
    FUN_00d50b20();
  }
  return;
}


