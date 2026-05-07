// Function: FUN_01981860
// Address: 01981860
// Size: 2072 bytes
// Class: MUSpectrumShaper


/* WARNING: Removing unreachable block (ram,0x01981c88) */
/* WARNING: Removing unreachable block (ram,0x01981c91) */
/* WARNING: Removing unreachable block (ram,0x01981e9d) */
/* WARNING: Removing unreachable block (ram,0x01981ea6) */
/* WARNING: Removing unreachable block (ram,0x01981bc7) */
/* WARNING: Removing unreachable block (ram,0x01981c23) */
/* WARNING: Removing unreachable block (ram,0x01981c2c) */
/* WARNING: Removing unreachable block (ram,0x01981cb8) */
/* WARNING: Removing unreachable block (ram,0x01981cc1) */
/* WARNING: Removing unreachable block (ram,0x01981d48) */
/* WARNING: Removing unreachable block (ram,0x01981d51) */
/* WARNING: Removing unreachable block (ram,0x019818e8) */
/* WARNING: Removing unreachable block (ram,0x019818f1) */
/* WARNING: Removing unreachable block (ram,0x0198197c) */
/* WARNING: Removing unreachable block (ram,0x01981981) */
/* WARNING: Removing unreachable block (ram,0x01981a59) */
/* WARNING: Removing unreachable block (ram,0x01981d56) */
/* WARNING: Removing unreachable block (ram,0x01981e24) */
/* WARNING: Removing unreachable block (ram,0x01981e2d) */
/* WARNING: Removing unreachable block (ram,0x01981d1c) */
/* WARNING: Removing unreachable block (ram,0x01981d25) */
/* WARNING: Removing unreachable block (ram,0x01981af6) */
/* WARNING: Removing unreachable block (ram,0x01981afb) */
/* WARNING: Removing unreachable block (ram,0x01982004) */
/* WARNING: Removing unreachable block (ram,0x0198200d) */
/* WARNING: Removing unreachable block (ram,0x01981f01) */
/* WARNING: Removing unreachable block (ram,0x01981f0a) */
/* WARNING: Removing unreachable block (ram,0x01981a7d) */
/* WARNING: Removing unreachable block (ram,0x01981a8a) */
/* WARNING: Removing unreachable block (ram,0x01981f2d) */
/* WARNING: Removing unreachable block (ram,0x01981f36) */

void FUN_01981860(pthread_key_t param_1)

{
  longlong lVar1;
  char cVar2;
  char cVar3;
  void *pvVar4;
  longlong *unaff_RDI;
  longlong lVar5;
  int iVar6;
  bool bVar7;
  longlong local_70;
  char local_68;
  longlong *local_48;
  char local_40;
  
  FUN_01989f80();
  (**(code **)(*local_48 + 0xe20))();
  if ((local_68 == '\0') && (local_70 != 0)) {
    FUN_00d50b00();
  }
  if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  lVar5 = unaff_RDI[0x2e];
  if (lVar5 != 0) {
    FUN_00d50b00();
  }
  cVar2 = FUN_00d23d70();
  if (lVar5 != 0) {
    FUN_00d50b20();
  }
  if (cVar2 != '\0') {
    if ((char)unaff_RDI[0x31] == '\0') {
      if (*(char *)((longlong)unaff_RDI + 0x18a) == '\0') {
        pvVar4 = _pthread_getspecific(param_1);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01268dd0();
        if (lVar5 != 0) {
          FUN_00d50b00();
          pvVar4 = _pthread_getspecific(param_1);
          if (pvVar4 != (void *)0x0) {
            FUN_00e8b990();
          }
          cVar2 = FUN_01263cf0();
          if (cVar2 == '\0') {
            cVar2 = FUN_00d23d70();
          }
          else {
            cVar2 = '\0';
          }
          FUN_00d50b20();
          goto LAB_01982016;
        }
      }
      else {
        pvVar4 = _pthread_getspecific(param_1);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01266fe0();
        if (lVar5 != 0) {
          pvVar4 = _pthread_getspecific(param_1);
          if (pvVar4 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_01266fe0();
          pvVar4 = _pthread_getspecific(param_1);
          if (pvVar4 != (void *)0x0) {
            FUN_00e8b990();
          }
          lVar1 = unaff_RDI[0x2e];
          if (lVar1 != 0) {
            FUN_00d50b00();
          }
          FUN_012ebc80();
          bVar7 = lVar5 == 0;
          if (bVar7) {
            lVar5 = 0;
          }
          else {
            FUN_00d50b00();
          }
          if (lVar1 != 0) {
            FUN_00d50b20();
          }
          if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if (lVar5 != 0) {
            if (*(int *)(lVar5 + 0xc) < 1) {
              cVar2 = '\0';
              FUN_001159b0();
            }
            else {
              iVar6 = 0;
              cVar2 = '\0';
              do {
                cVar3 = FUN_00d23d70();
                if (cVar3 != '\0') {
                  cVar2 = '\x01';
                }
                iVar6 = iVar6 + 1;
              } while (iVar6 < *(int *)(lVar5 + 0xc));
              FUN_001159b0();
            }
            if (!bVar7) {
              FUN_00d50b20();
            }
            goto LAB_01982016;
          }
        }
      }
    }
    else if (*(char *)((longlong)unaff_RDI + 0x18b) == '\0') {
      pvVar4 = _pthread_getspecific(param_1);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01268710();
      if (lVar5 != 0) {
        FUN_00d50b00();
        pvVar4 = _pthread_getspecific(param_1);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        cVar2 = FUN_01263cf0();
        if (cVar2 == '\0') {
          cVar2 = FUN_00d23d70();
        }
        else {
          cVar2 = '\0';
        }
        FUN_00d50b20();
        goto LAB_01982016;
      }
    }
    else {
      pvVar4 = _pthread_getspecific(param_1);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01266fe0();
      if (lVar5 != 0) {
        pvVar4 = _pthread_getspecific(param_1);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01266fe0();
        pvVar4 = _pthread_getspecific(param_1);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        lVar1 = unaff_RDI[0x2e];
        if (lVar1 != 0) {
          FUN_00d50b00();
        }
        FUN_012eb7a0();
        bVar7 = lVar5 == 0;
        if (bVar7) {
          lVar5 = 0;
        }
        else {
          FUN_00d50b00();
        }
        if (lVar1 != 0) {
          FUN_00d50b20();
        }
        if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if (lVar5 != 0) {
          if (*(int *)(lVar5 + 0xc) < 1) {
            cVar2 = '\0';
            FUN_001159b0();
          }
          else {
            iVar6 = 0;
            cVar2 = '\0';
            do {
              cVar3 = FUN_00d23d70();
              if (cVar3 != '\0') {
                cVar2 = '\x01';
              }
              iVar6 = iVar6 + 1;
            } while (iVar6 < *(int *)(lVar5 + 0xc));
            FUN_001159b0();
          }
          if (!bVar7) {
            FUN_00d50b20();
          }
          goto LAB_01982016;
        }
      }
    }
  }
  cVar2 = '\0';
LAB_01982016:
  if (*(char *)((longlong)unaff_RDI + 0x18c) != cVar2) {
    *(char *)((longlong)unaff_RDI + 0x18c) = cVar2;
    (**(code **)(*unaff_RDI + 0x620))();
  }
  if (local_70 != 0) {
    FUN_00d50b20();
  }
  return;
}


