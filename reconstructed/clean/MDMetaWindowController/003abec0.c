// Function: FUN_003abec0
// Address: 003abec0
// Size: 1587 bytes
// Class: MDMetaWindowController

void FUN_003abec0(void* param_1)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  void *pvVar5;
  int iVar6;
  double dVar7;
  uint64_t uVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  int64_t local_88;
  char local_80;
  int64_t local_50;
  char local_48;
  int64_t local_40;
  char local_38;
  
  cVar3 = FUN_00212c70();
  if (cVar3 == '\0') {
    FUN_00261550();
    if (local_80 == '\0') {
      if (local_88 == 0) goto LAB_003ac4ed;
      FUN_00d50b00();
    }
    else if (local_88 == 0) goto LAB_003ac4ed;
    if (0 < *(int *)(local_88 + 0xc)) {
      iVar6 = 0;
      do {
        pvVar5 = _pthread_getspecific(param_1);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        dVar7 = (double)FUN_01653920();
        if ((dVar7 != g_02390448) || (NAN(dVar7) || NAN(g_02390448))) {
          pvVar5 = _pthread_getspecific(param_1);
          if (pvVar5 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_01657380();
          if ((local_38 == '\0') && (local_40 != 0)) {
            FUN_00d50b00();
          }
          pvVar5 = _pthread_getspecific(param_1);
          if (pvVar5 != (void *)0x0) {
            FUN_00e8b990();
          }
          cVar3 = FUN_01651ac0();
          if (cVar3 == '\0') {
            pvVar5 = _pthread_getspecific(param_1);
            if (pvVar5 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_016573a0();
            pvVar5 = _pthread_getspecific(param_1);
            if (pvVar5 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_01710460();
            if (local_38 == '\0') {
              if (local_40 != 0) {
                FUN_00d50b00();
              }
            }
            else {
              local_38 = '\0';
            }
            if ((local_48 != '\0') && (local_50 != 0)) {
              FUN_00d50b20();
            }
            if (local_40 == 0) goto LAB_003ac4b0;
            pvVar5 = _pthread_getspecific(param_1);
            if (pvVar5 != (void *)0x0) {
              FUN_00e8b990();
            }
            cVar3 = FUN_016c2730();
            if (cVar3 == '\0') {
LAB_003ac490:
              bVar1 = true;
              bVar2 = false;
            }
            else {
              pvVar5 = _pthread_getspecific(param_1);
              if (pvVar5 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_016501d0();
              pvVar5 = _pthread_getspecific(param_1);
              if (pvVar5 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_01505900();
              if (local_38 == '\0') {
                if (local_40 != 0) {
                  FUN_00d50b00();
                }
              }
              else {
                local_38 = '\0';
              }
              if ((local_48 != '\0') && (local_50 != 0)) {
                FUN_00d50b20();
              }
              pvVar5 = _pthread_getspecific(param_1);
              if (pvVar5 != (void *)0x0) {
                FUN_00e8b990();
              }
              iVar4 = FUN_016c2e90();
              bVar1 = true;
              if (0 < iVar4) {
                pvVar5 = _pthread_getspecific(param_1);
                if (pvVar5 != (void *)0x0) {
                  FUN_00e8b990();
                }
                cVar3 = FUN_016c2730();
                if (cVar3 != '\0') {
                  pvVar5 = _pthread_getspecific(param_1);
                  if (pvVar5 != (void *)0x0) {
                    FUN_00e8b990();
                  }
                  uVar8 = FUN_00e7bdb0();
                  dVar7 = (double)FUN_016c9410(uVar8,0);
                  pvVar5 = _pthread_getspecific(param_1);
                  if (pvVar5 != (void *)0x0) {
                    FUN_00e8b990();
                  }
                  uVar8 = FUN_00e7bdb0();
                  dVar9 = (double)FUN_016c9410(uVar8,0);
                  pvVar5 = _pthread_getspecific(param_1);
                  if (pvVar5 != (void *)0x0) {
                    FUN_00e8b990();
                  }
                  dVar10 = (double)FUN_01655100();
                  pvVar5 = _pthread_getspecific(param_1);
                  if (pvVar5 != (void *)0x0) {
                    FUN_00e8b990();
                  }
                  dVar11 = (double)FUN_01653920();
                  dVar7 = (dVar10 / dVar11) * (dVar7 / dVar9);
                  bVar1 = g_023b36d8 < dVar7 || dVar7 < g_023b36d0;
                }
              }
              if (local_40 != 0) {
                FUN_00d50b20();
              }
              if (bVar1) goto LAB_003ac490;
              bVar2 = true;
              bVar1 = false;
            }
            FUN_00d50b20();
            if (bVar2) goto LAB_003ac4b0;
          }
          else {
LAB_003ac4b0:
            bVar1 = false;
          }
          if (local_40 != 0) {
            FUN_00d50b20();
          }
          if (bVar1) break;
        }
        iVar6 = iVar6 + 1;
      } while (iVar6 < *(int *)(local_88 + 0xc));
    }
    FUN_00277f20();
    FUN_00d50b20();
  }
LAB_003ac4ed:
  FUN_01cee390();
  return;
}

