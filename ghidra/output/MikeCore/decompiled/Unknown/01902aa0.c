// Function: FUN_01902aa0
// Address: 01902aa0
// Size: 1639 bytes
// Class: Unknown


void FUN_01902aa0(double param_1,ulonglong *param_2)

{
  ulonglong uVar1;
  char cVar2;
  int iVar3;
  ulonglong uVar4;
  char *pcVar5;
  void *pvVar6;
  int *in_RCX;
  char *pcVar7;
  int iVar8;
  ulonglong unaff_RSI;
  longlong unaff_RDI;
  int iVar9;
  int iVar10;
  int iVar11;
  longlong lVar12;
  double dVar13;
  char local_48 [8];
  double local_40;
  char local_38 [8];
  
  if (*param_2 == 0) {
    return;
  }
  uVar4 = FUN_00e7bdb0();
  if ((((unaff_RSI >> 0x20 != 0) && (uVar4 >> 0x20 != 0)) && (cVar2 = FUN_00e7c000(), cVar2 != '\0')
      ) && ((param_1 == 0.0 && (!NAN(param_1))))) {
    return;
  }
  uVar1 = *param_2;
  FUN_00d23310();
  local_38[0] = local_48[0];
  pcVar7 = local_38;
  pcVar5 = local_48;
  if (local_48[0] == '\0') {
    pcVar5 = pcVar7;
  }
  *pcVar5 = '\0';
  if ((local_48[0] != '\0') && (uVar4 != 0)) {
    FUN_00d50b20();
  }
  if (uVar1 == uVar4) {
    if ((local_38[0] != '\0') && (uVar4 != 0)) {
      FUN_00d50b20();
    }
  }
  else if (uVar1 == 0) {
    if ((local_38[0] != '\0') && (uVar4 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    iVar8 = *(int *)(*(longlong *)(unaff_RDI + 0x38) + 0xc);
    if ((local_38[0] != '\0') && (uVar4 != 0)) {
      FUN_00d50b20();
    }
    if (iVar8 != 0) {
      FUN_00d23340();
      pcVar7 = local_38;
      pcVar5 = local_48;
      if (local_48[0] == '\0') {
        pcVar5 = pcVar7;
      }
      local_38[0] = local_48[0];
      *pcVar5 = '\0';
      if ((local_48[0] != '\0') && (uVar4 != 0)) {
        FUN_00d50b20();
      }
      if ((local_38[0] != '\0') && (uVar4 != 0)) {
        FUN_00d50b20();
      }
      if (uVar1 == uVar4) {
        iVar8 = *(int *)(*(longlong *)(unaff_RDI + 0x38) + 0xc) + -1;
        goto LAB_01902d8e;
      }
      pvVar6 = _pthread_getspecific((pthread_key_t)pcVar7);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      local_40 = (double)FUN_01907950();
      iVar3 = *(int *)(*(longlong *)(unaff_RDI + 0x38) + 0xc);
      dVar13 = (double)FUN_01907950();
      if (dVar13 <= local_40) {
        dVar13 = (double)FUN_01907950();
        iVar8 = iVar3 + -2;
        if (dVar13 <= local_40) goto LAB_01902d8e;
        iVar9 = 1;
        if (in_RCX == (int *)0x0) {
          iVar10 = iVar3 + -2;
        }
        else {
          iVar8 = *in_RCX;
          if (iVar8 == -1) {
            iVar10 = iVar3 + -2;
          }
          else {
            iVar11 = iVar8;
            if (iVar3 + -2 < iVar8) {
              iVar11 = iVar3 + -2;
            }
            if (iVar8 < 1) {
              iVar11 = 1;
            }
            pcVar7 = *(char **)(*(longlong *)(unaff_RDI + 0x38) + 0x10);
            dVar13 = (double)FUN_01907950();
            if (dVar13 <= local_40) {
              iVar9 = iVar11;
              if (iVar11 < iVar3 + -1) {
                iVar10 = iVar11 + 1;
                pcVar7 = *(char **)(*(longlong *)(unaff_RDI + 0x38) + 0x10);
                dVar13 = (double)FUN_01907950();
                if (local_40 < dVar13) goto LAB_019030df;
              }
              iVar10 = iVar11 + 2;
              if (iVar10 < iVar3) {
                pcVar7 = *(char **)(*(longlong *)(unaff_RDI + 0x38) + 0x10);
                dVar13 = (double)FUN_01907950();
                if (local_40 < dVar13) goto LAB_019030df;
              }
              iVar10 = iVar11 + 3;
              if (iVar10 < iVar3) {
                pcVar7 = *(char **)(*(longlong *)(unaff_RDI + 0x38) + 0x10);
                dVar13 = (double)FUN_01907950();
                if (local_40 < dVar13) goto LAB_019030df;
              }
              iVar10 = iVar3 + -2;
            }
            else {
              iVar9 = 1;
              iVar10 = iVar11;
              if (0 < iVar11) {
                pcVar7 = *(char **)(*(longlong *)(unaff_RDI + 0x38) + 0x10);
                dVar13 = (double)FUN_01907950();
                iVar9 = iVar11 + -1;
                if (local_40 < dVar13) {
                  if (iVar11 < 2) {
                    iVar10 = 1;
                    iVar9 = 1;
                  }
                  else {
                    pcVar7 = *(char **)(*(longlong *)(unaff_RDI + 0x38) + 0x10);
                    dVar13 = (double)FUN_01907950();
                    iVar9 = iVar11 + -2;
                    if (local_40 < dVar13) {
                      if (iVar11 < 3) {
                        iVar10 = 2;
                        iVar9 = 1;
                      }
                      else {
                        pcVar7 = *(char **)(*(longlong *)(unaff_RDI + 0x38) + 0x10);
                        dVar13 = (double)FUN_01907950();
                        iVar9 = iVar11 + -3;
                        if (local_40 < dVar13) {
                          iVar9 = 1;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
LAB_019030df:
        do {
          iVar8 = iVar9;
          if (iVar10 - iVar9 == 1) break;
          iVar8 = (iVar10 - iVar9) / 2 + iVar9;
          pcVar7 = *(char **)(*(longlong *)(unaff_RDI + 0x38) + 0x10);
          dVar13 = (double)FUN_01907950();
          iVar3 = iVar8;
          if (local_40 <= dVar13) {
            iVar3 = iVar9;
            iVar10 = iVar8;
          }
          iVar9 = iVar3;
        } while ((dVar13 != local_40) || (NAN(dVar13) || NAN(local_40)));
        goto LAB_01902d8e;
      }
    }
  }
  iVar8 = 0;
LAB_01902d8e:
  if (in_RCX != (int *)0x0) {
    *in_RCX = iVar8;
  }
  if (iVar8 < *(int *)(*(longlong *)(unaff_RDI + 0x38) + 0xc)) {
    lVar12 = (longlong)iVar8;
    if ((param_1 != 0.0) || (NAN(param_1))) {
      do {
        cVar2 = FUN_00e7c7f0();
        if (cVar2 != '\0') {
          pvVar6 = _pthread_getspecific((pthread_key_t)pcVar7);
          if (pvVar6 != (void *)0x0) {
            FUN_00e8b990();
          }
          pvVar6 = _pthread_getspecific((pthread_key_t)pcVar7);
          if (pvVar6 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_019079b0();
          FUN_00e7b820();
          FUN_01907c60();
        }
        pvVar6 = _pthread_getspecific((pthread_key_t)pcVar7);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        pvVar6 = _pthread_getspecific((pthread_key_t)pcVar7);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        dVar13 = (double)FUN_01907950();
        FUN_01907cc0(dVar13 + param_1);
        lVar12 = lVar12 + 1;
      } while (lVar12 < *(int *)(*(longlong *)(unaff_RDI + 0x38) + 0xc));
    }
    else {
      do {
        cVar2 = FUN_00e7c7f0();
        if (cVar2 != '\0') {
          pvVar6 = _pthread_getspecific((pthread_key_t)pcVar7);
          if (pvVar6 != (void *)0x0) {
            FUN_00e8b990();
          }
          pvVar6 = _pthread_getspecific((pthread_key_t)pcVar7);
          if (pvVar6 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_019079b0();
          FUN_00e7b820();
          FUN_01907c60();
        }
        lVar12 = lVar12 + 1;
      } while (lVar12 < *(int *)(*(longlong *)(unaff_RDI + 0x38) + 0xc));
    }
  }
  return;
}


