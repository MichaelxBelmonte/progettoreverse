// Function: FUN_01902690
// Address: 01902690
// Size: 976 bytes
// Class: Unknown


void FUN_01902690(undefined8 param_1,int *param_2)

{
  longlong lVar1;
  int iVar2;
  char *pcVar3;
  void *pvVar4;
  pthread_key_t pVar5;
  int iVar6;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  int iVar7;
  int iVar8;
  char *pcVar9;
  int iVar10;
  double dVar11;
  longlong local_58;
  char local_50 [8];
  int *local_48;
  double local_40;
  char local_38 [8];
  
  lVar1 = *unaff_RSI;
  FUN_00d23310();
  local_38[0] = local_50[0];
  pcVar3 = local_50;
  if (local_50[0] == '\0') {
    pcVar3 = local_38;
  }
  *pcVar3 = '\0';
  if ((local_50[0] != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  if (lVar1 == local_58) {
    if ((local_38[0] != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
  }
  else if (lVar1 == 0) {
    if ((local_38[0] != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    iVar6 = *(int *)(*(longlong *)(unaff_RDI + 0x38) + 0xc);
    local_48 = param_2;
    if ((local_38[0] != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    param_2 = local_48;
    if (iVar6 != 0) {
      FUN_00d23340();
      pcVar3 = local_38;
      pcVar9 = local_50;
      if (local_50[0] == '\0') {
        pcVar9 = pcVar3;
      }
      local_38[0] = local_50[0];
      *pcVar9 = '\0';
      if ((local_50[0] != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      pVar5 = (pthread_key_t)pcVar3;
      if ((local_38[0] != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      if (lVar1 == local_58) {
        iVar6 = *(int *)(*(longlong *)(unaff_RDI + 0x38) + 0xc) + -1;
        goto LAB_01902924;
      }
      pvVar4 = _pthread_getspecific(pVar5);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      local_40 = (double)FUN_01907950();
      iVar2 = *(int *)(*(longlong *)(unaff_RDI + 0x38) + 0xc);
      dVar11 = (double)FUN_01907950();
      if (dVar11 <= local_40) {
        dVar11 = (double)FUN_01907950();
        iVar6 = iVar2 + -2;
        if (dVar11 <= local_40) goto LAB_01902924;
        iVar8 = 1;
        if (param_2 == (int *)0x0) {
          iVar10 = iVar2 + -2;
        }
        else {
          iVar6 = *param_2;
          if (iVar6 == -1) {
            iVar10 = iVar2 + -2;
          }
          else {
            iVar7 = iVar6;
            if (iVar2 + -2 < iVar6) {
              iVar7 = iVar2 + -2;
            }
            if (iVar6 < 1) {
              iVar7 = 1;
            }
            dVar11 = (double)FUN_01907950();
            if (dVar11 <= local_40) {
              iVar8 = iVar7;
              if (iVar7 < iVar2 + -1) {
                iVar10 = iVar7 + 1;
                dVar11 = (double)FUN_01907950();
                param_2 = local_48;
                if (local_40 < dVar11) goto LAB_01902a1f;
              }
              iVar10 = iVar7 + 2;
              if (((iVar2 <= iVar10) ||
                  (dVar11 = (double)FUN_01907950(), param_2 = local_48, dVar11 <= local_40)) &&
                 ((iVar10 = iVar7 + 3, iVar2 <= iVar10 ||
                  (dVar11 = (double)FUN_01907950(), param_2 = local_48, dVar11 <= local_40)))) {
                iVar10 = iVar2 + -2;
                param_2 = local_48;
              }
            }
            else {
              iVar8 = 1;
              iVar10 = iVar7;
              if (0 < iVar7) {
                dVar11 = (double)FUN_01907950();
                iVar8 = iVar7 + -1;
                if (local_40 < dVar11) {
                  if (iVar7 < 2) {
                    iVar10 = 1;
                    iVar8 = 1;
                  }
                  else {
                    dVar11 = (double)FUN_01907950();
                    iVar8 = iVar7 + -2;
                    if (local_40 < dVar11) {
                      if (iVar7 < 3) {
                        iVar10 = 2;
                        iVar8 = 1;
                      }
                      else {
                        dVar11 = (double)FUN_01907950();
                        iVar8 = iVar7 + -3;
                        if (local_40 < dVar11) {
                          iVar8 = 1;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
LAB_01902a1f:
        do {
          iVar6 = iVar8;
          if (iVar10 - iVar8 == 1) break;
          iVar6 = (iVar10 - iVar8) / 2 + iVar8;
          dVar11 = (double)FUN_01907950();
          iVar2 = iVar6;
          if (local_40 <= dVar11) {
            iVar2 = iVar8;
            iVar10 = iVar6;
          }
          iVar8 = iVar2;
        } while ((dVar11 != local_40) || (NAN(dVar11) || NAN(local_40)));
        goto LAB_01902924;
      }
    }
  }
  iVar6 = 0;
LAB_01902924:
  if (param_2 != (int *)0x0) {
    *param_2 = iVar6;
  }
  FUN_018fc0b0();
  return;
}


