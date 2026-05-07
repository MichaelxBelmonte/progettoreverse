// Function: FUN_014bc920
// Address: 014bc920
// Size: 671 bytes
// Class: Unknown


/* WARNING: Removing unreachable block (ram,0x014bca67) */
/* WARNING: Removing unreachable block (ram,0x014bca70) */
/* WARNING: Removing unreachable block (ram,0x014bcb67) */
/* WARNING: Removing unreachable block (ram,0x014bcb70) */
/* WARNING: Removing unreachable block (ram,0x014bcaa7) */
/* WARNING: Removing unreachable block (ram,0x014bcad0) */
/* WARNING: Removing unreachable block (ram,0x014bcaa9) */
/* WARNING: Removing unreachable block (ram,0x014bcad2) */

void FUN_014bc920(void)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  void *pvVar4;
  longlong lVar5;
  pthread_key_t pVar6;
  longlong lVar7;
  longlong unaff_RDI;
  pthread_key_t pVar8;
  longlong local_68;
  char local_60;
  longlong local_58;
  char local_50;
  int local_40;
  
  cVar3 = FUN_00d59e50();
  if ((cVar3 != '\0') && (lVar1 = *(longlong *)(unaff_RDI + 0xc0), lVar1 != 0)) {
    if (0 < *(int *)(lVar1 + 0xc)) {
      pVar8 = 0;
      do {
        lVar2 = local_58;
        pvVar4 = _pthread_getspecific(pVar8);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_013dd790();
        if (local_50 == '\0') {
          if (local_58 != 0) {
            FUN_00d50b00();
            goto LAB_014bca78;
          }
        }
        else if (local_58 != 0) {
LAB_014bca78:
          local_50 = '\0';
          local_58 = 0;
          local_40 = -1;
LAB_014bcaa3:
          while( true ) {
            lVar5 = (longlong)local_40;
            local_40 = local_40 + 1;
            if (*(int *)(lVar2 + 0xc) <= local_40) break;
            lVar7 = *(longlong *)(lVar2 + 0x10);
            local_58 = *(longlong *)(lVar7 + 8 + lVar5 * 8);
            pvVar4 = _pthread_getspecific((pthread_key_t)lVar7);
            pVar6 = (pthread_key_t)lVar7;
            if (pvVar4 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_011ef8d0();
            if (local_60 == '\0') goto LAB_014bcb50;
            if (local_68 != 0) goto LAB_014bcb80;
          }
          FUN_0015edf0();
          FUN_00d50b20();
        }
        pVar8 = pVar8 + 1;
      } while ((int)pVar8 < *(int *)(lVar1 + 0xc));
    }
    FUN_00115050();
  }
  FUN_00d654d0();
  return;
LAB_014bcb50:
  if (local_68 != 0) {
    FUN_00d50b00();
LAB_014bcb80:
    pvVar4 = _pthread_getspecific(pVar6);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01268eb0();
    FUN_00d50b20();
  }
  goto LAB_014bcaa3;
}


