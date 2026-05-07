// Function: FUN_009e2013
// Address: 009e2013
// Size: 1098 bytes
// Class: Unknown


char * FUN_009e2013(char *param_1,longlong param_2,char param_3)

{
  char *pcVar1;
  char cVar2;
  longlong *plVar3;
  char cVar4;
  int iVar5;
  char *pcVar6;
  longlong lVar7;
  char *pcVar8;
  char *unaff_RSI;
  char *unaff_RDI;
  char *pcVar9;
  uint uVar10;
  bool bVar11;
  ulonglong local_88;
  char *local_80;
  char *local_78;
  undefined8 local_58;
  char *pcStack_50;
  char *local_48;
  char local_3a [2];
  
  if (unaff_RDI == unaff_RSI) {
    return unaff_RDI;
  }
  pcVar8 = (char *)(param_2 + 0x28);
  plVar3 = *(longlong **)(param_1 + 0x18);
  pcVar6 = param_1;
  if (*(int *)(param_2 + 0x10) != 0) {
    uVar10 = 0;
    do {
      pcVar6 = (char *)CONCAT71((int7)((ulonglong)pcVar6 >> 8),*pcVar8);
      pcVar9 = unaff_RDI;
      if (*pcVar8 == '\0') {
        cVar4 = *unaff_RDI;
        if (param_3 != '\0') {
          pcVar6 = (char *)**(undefined8 **)(*plVar3 + 8);
          cVar4 = (**(code **)(pcVar6 + 0x28))();
        }
        if (cVar4 == '\0') goto LAB_009e2434;
        pcVar8 = pcVar8 + 1;
      }
      else {
        while( true ) {
          cVar4 = *pcVar9;
          if (param_3 != '\0') {
            lVar7 = **(longlong **)(*plVar3 + 8);
            cVar4 = (**(code **)(lVar7 + 0x28))();
            pcVar6 = (char *)CONCAT71((int7)((ulonglong)lVar7 >> 8),*pcVar8);
          }
          if (cVar4 != (char)pcVar6) break;
          pcVar1 = pcVar8 + 1;
          pcVar6 = (char *)CONCAT71((int7)((ulonglong)pcVar6 >> 8),*pcVar1);
          pcVar8 = pcVar8 + 1;
          bVar11 = unaff_RSI + -1 == pcVar9;
          pcVar9 = pcVar9 + 1;
          if ((bVar11) || (*pcVar1 == '\0')) break;
        }
        if ((char)pcVar6 == '\0') {
          if (*(char *)(param_2 + 0x24) != '\0') {
            return unaff_RDI;
          }
          if (pcVar9 == unaff_RDI) {
            return unaff_RDI + 1;
          }
          return pcVar9;
        }
        do {
          cVar4 = *pcVar8;
          pcVar8 = pcVar8 + 1;
        } while (cVar4 != '\0');
      }
      uVar10 = uVar10 + 1;
    } while (uVar10 < *(uint *)(param_2 + 0x10));
  }
  cVar4 = *unaff_RDI;
  if (param_3 != '\0') {
    cVar4 = (**(code **)(**(longlong **)(*plVar3 + 8) + 0x28))();
  }
  if (*(int *)(param_2 + 0x14) == 0) {
    if (*(int *)(param_2 + 0x18) == 0) goto LAB_009e23f0;
    local_58 = 0;
    pcStack_50 = (char *)0x0;
    local_48 = (char *)0x0;
  }
  else {
    local_58 = 0;
    pcStack_50 = (char *)0x0;
    local_48 = (char *)0x0;
    if ((param_1[0x2a] & 0x20U) == 0) {
      std::string::assign((ulong)pcVar6,cVar4);
    }
    else {
      pcVar6 = local_3a + 1;
      local_3a[1] = 0;
      local_3a[0] = cVar4;
      FUN_009d76b8(pcVar6,local_3a);
      if ((local_58 & 1) != 0) {
        operator_delete(pcVar6);
      }
      local_48 = local_78;
      pcStack_50 = local_80;
      local_58 = local_88;
      pcVar6 = local_80;
    }
    if (*(int *)(param_2 + 0x14) != 0) {
      uVar10 = 0;
      do {
        if (*pcVar8 == '\0') {
          pcVar6 = pcStack_50;
          if ((local_58 & 1) == 0) {
            pcVar6 = (char *)(local_58 >> 1 & 0x7f);
          }
          if (pcVar6 != (char *)0x0) {
            if (pcVar6 == (char *)((longlong)&MACH_HEADER.magic + 1)) {
              pcVar6 = (char *)((longlong)&local_58 + 1);
              if ((local_58 & 1) != 0) {
                pcVar6 = local_48;
              }
              if (*pcVar6 == '\0') goto LAB_009e21d9;
            }
            goto LAB_009e21ca;
          }
LAB_009e21d9:
          pcVar8 = pcVar8 + 1;
          do {
            cVar2 = *pcVar8;
            pcVar8 = pcVar8 + 1;
          } while (cVar2 != '\0');
          if (*pcVar8 == '\0') {
            pcVar6 = pcStack_50;
            if ((local_58 & 1) == 0) {
              pcVar6 = (char *)(local_58 >> 1 & 0x7f);
            }
            if (pcVar6 == (char *)((longlong)&MACH_HEADER.magic + 1)) {
              pcVar6 = (char *)((longlong)&local_58 + 1);
              if ((local_58 & 1) != 0) {
                pcVar6 = local_48;
              }
              if (*pcVar6 != '\0') goto LAB_009e2269;
            }
            else if (pcVar6 != (char *)0x0) goto LAB_009e2269;
          }
          else {
LAB_009e2269:
            iVar5 = std::string::compare(pcVar6);
            if (0 < iVar5) goto LAB_009e227c;
          }
          pcVar6 = unaff_RDI;
          if (*(char *)(param_2 + 0x24) == '\0') {
            pcVar6 = unaff_RDI + 1;
          }
          bVar11 = true;
          unaff_RDI = pcVar6;
          goto LAB_009e23dc;
        }
LAB_009e21ca:
        iVar5 = std::string::compare(pcVar6);
        if (-1 < iVar5) goto LAB_009e21d9;
        pcVar8 = pcVar8 + 1;
        do {
          cVar2 = *pcVar8;
          pcVar8 = pcVar8 + 1;
        } while (cVar2 != '\0');
LAB_009e227c:
        pcVar8 = pcVar8 + 1;
        do {
          cVar2 = *pcVar8;
          pcVar8 = pcVar8 + 1;
        } while (cVar2 != '\0');
        uVar10 = uVar10 + 1;
      } while (uVar10 < *(uint *)(param_2 + 0x14));
    }
  }
  bVar11 = false;
  if (*(int *)(param_2 + 0x18) != 0) {
    pcVar6 = local_3a + 1;
    local_3a[1] = 0;
    local_3a[0] = cVar4;
    FUN_009dedf4(pcVar6,local_3a);
    if ((local_58 & 1) != 0) {
      operator_delete(pcVar6);
    }
    local_48 = local_78;
    pcStack_50 = local_80;
    local_58 = local_88;
    pcVar6 = local_80;
    if (*(int *)(param_2 + 0x18) != 0) {
      uVar10 = 0;
      do {
        if (*pcVar8 == '\0') {
          pcVar6 = pcStack_50;
          if ((local_58 & 1) == 0) {
            pcVar6 = (char *)(local_58 >> 1 & 0x7f);
          }
          if (pcVar6 == (char *)((longlong)&MACH_HEADER.magic + 1)) {
            pcVar6 = (char *)((longlong)&local_58 + 1);
            if ((local_58 & 1) != 0) {
              pcVar6 = local_48;
            }
            if (*pcVar6 != '\0') goto LAB_009e2365;
          }
          else if (pcVar6 != (char *)0x0) goto LAB_009e2365;
LAB_009e23b8:
          pcVar6 = unaff_RDI;
          if (*(char *)(param_2 + 0x24) == '\0') {
            pcVar6 = unaff_RDI + 1;
          }
          bVar11 = true;
          unaff_RDI = pcVar6;
          goto LAB_009e23dc;
        }
LAB_009e2365:
        iVar5 = std::string::compare(pcVar6);
        if (iVar5 == 0) goto LAB_009e23b8;
        pcVar8 = pcVar8 + 1;
        do {
          cVar4 = *pcVar8;
          pcVar8 = pcVar8 + 1;
        } while (cVar4 != '\0');
        uVar10 = uVar10 + 1;
      } while (uVar10 < *(uint *)(param_2 + 0x18));
    }
    bVar11 = false;
  }
LAB_009e23dc:
  if ((local_58 & 1) != 0) {
    operator_delete(pcVar6);
  }
  if (bVar11) {
    return unaff_RDI;
  }
LAB_009e23f0:
  cVar4 = FUN_009df118();
  if ((cVar4 == '\0') &&
     ((*(int *)(param_2 + 0x20) == 0 || (cVar4 = FUN_009df118(), cVar4 != '\0')))) {
    if (*(char *)(param_2 + 0x24) != '\0') {
      unaff_RDI = unaff_RDI + 1;
    }
  }
  else {
LAB_009e2434:
    if (*(char *)(param_2 + 0x24) == '\0') {
      unaff_RDI = unaff_RDI + 1;
    }
  }
  return unaff_RDI;
}


