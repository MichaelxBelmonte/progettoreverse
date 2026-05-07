// Function: FUN_009e63a2
// Address: 009e63a2
// Size: 1071 bytes
// Class: Unknown

char * FUN_009e63a2(char *param_1,int64_t param_2,char param_3)

{
  char cVar1;
  int64_t *plVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  char *pcVar6;
  int64_t lVar7;
  char *pcVar8;
  char *pcVar9;
  char *arg1;
  char *this_ptr;
  char *pcVar10;
  uint uVar11;
  uint64_t local_88;
  char *local_80;
  char *local_78;
  uint64_t local_58;
  char *pcStack_50;
  char *local_48;
  char local_32 [2];
  
  if (this_ptr == arg1) {
    return this_ptr;
  }
  pcVar8 = (char *)(param_2 + 0x28);
  plVar2 = *(int64_t **)(param_1 + 0x18);
  pcVar6 = param_1;
  if (*(int *)(param_2 + 0x10) != 0) {
    uVar11 = 0;
    do {
      pcVar6 = (char *)CONCAT71((int7)((uint64_t)pcVar6 >> 8),*pcVar8);
      pcVar10 = this_ptr;
      pcVar9 = pcVar8;
      if (*pcVar8 == '\0') {
        cVar4 = *this_ptr;
        if (param_3 != '\0') {
          pcVar6 = (char *)**(void**)(*plVar2 + 8);
          cVar4 = (**(code **)(pcVar6 + 0x28))();
        }
        if (cVar4 == '\0') {
          if (*(char *)(param_2 + 0x24) == '\0') {
            return this_ptr + 1;
          }
          return this_ptr;
        }
        pcVar8 = pcVar8 + 1;
      }
      else {
        while (pcVar8 = pcVar9 + 1, arg1 != pcVar10) {
          cVar4 = *pcVar10;
          if (param_3 != '\0') {
            lVar7 = **(int64_t **)(*plVar2 + 8);
            cVar4 = (**(code **)(lVar7 + 0x28))();
            pcVar6 = (char *)CONCAT71((int7)((uint64_t)lVar7 >> 8),*pcVar9);
          }
          if (cVar4 != (char)pcVar6) {
            if ((char)pcVar6 == '\0') goto LAB_009e64db;
            break;
          }
          pcVar10 = pcVar10 + 1;
          pcVar6 = (char *)CONCAT71((int7)((uint64_t)pcVar6 >> 8),*pcVar8);
          pcVar9 = pcVar8;
          if (*pcVar8 == '\0') {
LAB_009e64db:
            if (*(char *)(param_2 + 0x24) != '\0') {
              return this_ptr;
            }
            if (pcVar10 == this_ptr) {
              return this_ptr + 1;
            }
            return pcVar10;
          }
        }
        do {
          cVar4 = *pcVar8;
          pcVar8 = pcVar8 + 1;
        } while (cVar4 != '\0');
      }
      uVar11 = uVar11 + 1;
    } while (uVar11 < *(uint *)(param_2 + 0x10));
  }
  cVar4 = *this_ptr;
  if (param_3 != '\0') {
    cVar4 = (**(code **)(**(int64_t **)(*plVar2 + 8) + 0x28))();
  }
  if (*(int *)(param_2 + 0x14) == 0) {
    if (*(int *)(param_2 + 0x18) == 0) goto LAB_009e6760;
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
      pcVar6 = local_32 + 1;
      local_32[1] = 0;
      local_32[0] = cVar4;
      FUN_009d76b8(pcVar6,local_32);
      if ((local_58 & 1) != 0) {
        operator_delete(pcVar6);
      }
      local_48 = local_78;
      pcStack_50 = local_80;
      local_58 = local_88;
      pcVar6 = local_80;
    }
    if (*(int *)(param_2 + 0x14) != 0) {
      uVar11 = 0;
      do {
        if (*pcVar8 == '\0') {
          pcVar6 = pcStack_50;
          if ((local_58 & 1) == 0) {
            pcVar6 = (char *)(local_58 >> 1 & 0x7f);
          }
          if (pcVar6 != (char *)0x0) {
            if (pcVar6 == (char *)((int64_t)&MACH_HEADER.magic + 1)) {
              pcVar6 = (char *)((int64_t)&local_58 + 1);
              if ((local_58 & 1) != 0) {
                pcVar6 = local_48;
              }
              if (*pcVar6 == '\0') goto LAB_009e6599;
            }
            goto LAB_009e658a;
          }
LAB_009e6599:
          pcVar8 = pcVar8 + 1;
          do {
            cVar1 = *pcVar8;
            pcVar8 = pcVar8 + 1;
          } while (cVar1 != '\0');
          if (*pcVar8 == '\0') {
            pcVar6 = pcStack_50;
            if ((local_58 & 1) == 0) {
              pcVar6 = (char *)(local_58 >> 1 & 0x7f);
            }
            if (pcVar6 == (char *)((int64_t)&MACH_HEADER.magic + 1)) {
              pcVar6 = (char *)((int64_t)&local_58 + 1);
              if ((local_58 & 1) != 0) {
                pcVar6 = local_48;
              }
              if (*pcVar6 == '\0') goto LAB_009e6736;
            }
            else if (pcVar6 == (char *)0x0) goto LAB_009e6736;
          }
          iVar5 = std::string::compare(pcVar6);
          if (iVar5 < 1) goto LAB_009e6736;
        }
        else {
LAB_009e658a:
          iVar5 = std::string::compare(pcVar6);
          if (-1 < iVar5) goto LAB_009e6599;
          pcVar8 = pcVar8 + 1;
          do {
            cVar1 = *pcVar8;
            pcVar8 = pcVar8 + 1;
          } while (cVar1 != '\0');
        }
        pcVar8 = pcVar8 + 1;
        do {
          cVar1 = *pcVar8;
          pcVar8 = pcVar8 + 1;
        } while (cVar1 != '\0');
        uVar11 = uVar11 + 1;
      } while (uVar11 < *(uint *)(param_2 + 0x14));
    }
  }
  if (*(int *)(param_2 + 0x18) != 0) {
    pcVar6 = local_32 + 1;
    local_32[1] = 0;
    local_32[0] = cVar4;
    FUN_009dedf4(pcVar6,local_32);
    if ((local_58 & 1) != 0) {
      operator_delete(pcVar6);
    }
    local_48 = local_78;
    pcStack_50 = local_80;
    local_58 = local_88;
    pcVar6 = local_80;
    if (*(int *)(param_2 + 0x18) != 0) {
      uVar11 = 0;
      do {
        if (*pcVar8 == '\0') {
          pcVar6 = pcStack_50;
          if ((local_58 & 1) == 0) {
            pcVar6 = (char *)(local_58 >> 1 & 0x7f);
          }
          if (pcVar6 == (char *)((int64_t)&MACH_HEADER.magic + 1)) {
            pcVar6 = (char *)((int64_t)&local_58 + 1);
            if ((local_58 & 1) != 0) {
              pcVar6 = local_48;
            }
            if (*pcVar6 == '\0') goto LAB_009e6736;
          }
          else if (pcVar6 == (char *)0x0) goto LAB_009e6736;
        }
        iVar5 = std::string::compare(pcVar6);
        if (iVar5 == 0) goto LAB_009e6736;
        pcVar8 = pcVar8 + 1;
        do {
          cVar4 = *pcVar8;
          pcVar8 = pcVar8 + 1;
        } while (cVar4 != '\0');
        uVar11 = uVar11 + 1;
      } while (uVar11 < *(uint *)(param_2 + 0x18));
    }
  }
  bVar3 = false;
LAB_009e674d:
  if ((local_58 & 1) != 0) {
    operator_delete(pcVar6);
  }
  if (bVar3) {
    return this_ptr;
  }
LAB_009e6760:
  cVar4 = FUN_009df118();
  if ((cVar4 == '\0') &&
     ((*(int *)(param_2 + 0x20) == 0 || (cVar4 = FUN_009df118(), cVar4 != '\0')))) {
    if (*(char *)(param_2 + 0x24) != '\0') {
      this_ptr = this_ptr + 1;
    }
  }
  else if (*(char *)(param_2 + 0x24) == '\0') {
    this_ptr = this_ptr + 1;
  }
  return this_ptr;
LAB_009e6736:
  if (*(char *)(param_2 + 0x24) == '\0') {
    this_ptr = this_ptr + 1;
  }
  bVar3 = true;
  goto LAB_009e674d;
}

