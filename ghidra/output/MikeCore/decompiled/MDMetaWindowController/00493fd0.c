// Function: FUN_00493fd0
// Address: 00493fd0
// Size: 1236 bytes
// Class: MDMetaWindowController


undefined8 FUN_00493fd0(undefined8 param_1,int param_2)

{
  bool bVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  char *pcVar6;
  void *pvVar7;
  undefined8 uVar8;
  longlong **pplVar9;
  pthread_key_t pVar10;
  longlong *plVar11;
  longlong lVar12;
  longlong *unaff_RDI;
  longlong *plVar13;
  longlong *local_48;
  char local_40 [8];
  char local_38 [8];
  
  if (param_2 == 0) {
LAB_0049430d:
    uVar8 = 1;
  }
  else {
    if (unaff_RDI != (longlong *)0x0) {
      FUN_00d50b00();
    }
    local_38[0] = '\0';
    plVar13 = unaff_RDI;
    do {
      (**(code **)(*plVar13 + 0x370))();
      plVar11 = local_48;
      if (local_48 == plVar13) {
        if (((local_38[0] == '\0') && (local_48 != (longlong *)0x0)) &&
           (plVar11 = plVar13, local_40[0] != '\0')) goto LAB_00494077;
      }
      else {
        if (local_40[0] == '\0') {
          if (local_38[0] == '\0') {
            pcVar6 = local_38;
          }
          else {
            FUN_00d50b20();
            pcVar6 = local_38;
          }
        }
        else {
          if (local_38[0] != '\0') {
            FUN_00d50b20();
          }
LAB_00494077:
          local_38[0] = '\x01';
          pcVar6 = local_40;
        }
        *pcVar6 = '\0';
        plVar13 = plVar11;
      }
      if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      FUN_00082eb0();
      plVar11 = &DAT_02802688;
      if (plVar13 != (longlong *)0x0) {
        (**(code **)(*plVar13 + 0x360))();
        cVar3 = FUN_00e85ea0();
        plVar11 = (longlong *)&stack0xffffffffffffff80;
        if (cVar3 == '\0') {
          plVar11 = &DAT_02802688;
        }
      }
      if (*plVar11 != 0) {
        if ((local_38[0] == '\0') && (plVar13 != (longlong *)0x0)) {
          FUN_00d50b00();
        }
        break;
      }
    } while (plVar13 != (longlong *)0x0);
    pVar10 = (pthread_key_t)plVar11;
    if (unaff_RDI != (longlong *)0x0) {
      FUN_00d50b20();
    }
    if (plVar13 != (longlong *)0x0) {
      if (unaff_RDI[0x23] == 0) {
        bVar1 = true;
      }
      else {
        FUN_00d50b00();
        pvVar7 = _pthread_getspecific(pVar10);
        if (pvVar7 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01320d00();
        plVar13 = local_48;
        if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        bVar1 = true;
        if (plVar13 != (longlong *)0x0) {
          pvVar7 = _pthread_getspecific(pVar10);
          if (pvVar7 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_01320d00();
          pvVar7 = _pthread_getspecific(pVar10);
          if (pvVar7 != (void *)0x0) {
            FUN_00e8b990();
          }
          cVar3 = FUN_0124d450();
          if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          lVar12 = DAT_026f6fb0;
          if (cVar3 != '\0') {
            if (DAT_026f6fb0 != 0) {
              FUN_00d50b00();
            }
            lVar2 = DAT_027087a0;
            if (DAT_027087a0 != 0) {
              FUN_00d50b00();
            }
            FUN_01f6ca30();
            plVar13 = local_48;
            if (local_40[0] == '\0') {
              if (((local_48 != (longlong *)0x0) && (FUN_00d50b00(), local_40[0] != '\0')) &&
                 (local_48 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
            }
            else {
              local_40[0] = '\0';
            }
            if (lVar2 != 0) {
              FUN_00d50b20();
            }
            if (lVar12 != 0) {
              FUN_00d50b20();
            }
            iVar4 = (**(code **)(*plVar13 + 0x5e0))();
            bVar1 = true;
            if (((iVar4 == 0) && (uVar5 = FUN_01caea40(), -1 < (int)uVar5)) &&
               ((int)uVar5 < *(int *)(unaff_RDI[0x50] + 0xc))) {
              lVar12 = *(longlong *)(unaff_RDI[0x50] + 0x10);
              plVar13 = *(longlong **)(lVar12 + (ulonglong)uVar5 * 8);
              if (plVar13 != (longlong *)0x0) {
                FUN_00d50b00();
                pvVar7 = _pthread_getspecific((pthread_key_t)lVar12);
                if (pvVar7 != (void *)0x0) {
                  FUN_00e8b990();
                }
                FUN_00d51d20();
                plVar11 = local_48;
                FUN_002771e0();
                if (plVar11 == (longlong *)0x0) {
LAB_004943fb:
                  pplVar9 = (longlong **)&DAT_02802688;
                }
                else {
                  (**(code **)(*plVar11 + 0x360))();
                  cVar3 = FUN_00e85ea0();
                  pplVar9 = &local_48;
                  if (cVar3 == '\0') goto LAB_004943fb;
                }
                plVar11 = *pplVar9;
                if (plVar11 != plVar13) {
                  plVar13 = plVar11;
                  if (*(char *)(pplVar9 + 1) == '\0') {
                    if (plVar11 != (longlong *)0x0) {
                      FUN_00d50b00();
                    }
                    FUN_00d50b20();
                  }
                  else {
                    FUN_00d50b20();
                    *(undefined1 *)(pplVar9 + 1) = 0;
                  }
                }
                if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
                FUN_00493490();
                bVar1 = false;
                if (plVar13 != (longlong *)0x0) {
                  FUN_00d50b20();
                }
              }
            }
            FUN_00d50b20();
          }
        }
        FUN_00d50b20();
      }
      FUN_00d50b20();
      if (!bVar1) goto LAB_0049430d;
    }
    uVar8 = 0;
  }
  return uVar8;
}


