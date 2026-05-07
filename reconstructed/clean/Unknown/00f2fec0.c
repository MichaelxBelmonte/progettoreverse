// Function: FUN_00f2fec0
// Address: 00f2fec0
// Size: 909 bytes
// Class: Unknown

byte * FUN_00f2fec0(char *param_1,int *param_2,size_t param_3)

{
  char *pcVar1;
  uint *puVar2;
  byte *pbVar3;
  int64_t lVar4;
  int iVar5;
  uint64_t uVar6;
  int iVar7;
  byte *arg1;
  char cVar8;
  byte bVar9;
  byte *this_ptr;
  int64_t lVar10;
  uint64_t local_78 [4];
  uint64_t local_58;
  uint64_t uStack_50;
  uint64_t local_48;
  int64_t local_38;
  
  local_38 = *(int64_t *)PTR____stack_chk_guard_024a9898;
  *param_2 = 0;
  if ((this_ptr[1] != 0x23) || (this_ptr[2] == 0)) {
    iVar7 = _strncmp(param_1,(char *)(uint64_t)g_0278a8b8,param_3);
    if (iVar7 == 0) {
      puVar2 = &g_0278a8b8;
      lVar10 = 0;
    }
    else {
      iVar7 = _strncmp(param_1,(char *)(uint64_t)g_0278a8c8,param_3);
      if (iVar7 == 0) {
        puVar2 = &g_0278a8c8;
        lVar10 = 1;
      }
      else {
        iVar7 = _strncmp(param_1,(char *)(uint64_t)g_0278a8d8,param_3);
        if (iVar7 == 0) {
          puVar2 = &g_0278a8d8;
          lVar10 = 2;
        }
        else {
          iVar7 = _strncmp(param_1,(char *)(uint64_t)g_0278a8e8,param_3);
          if (iVar7 == 0) {
            puVar2 = &g_0278a8e8;
            lVar10 = 3;
          }
          else {
            iVar7 = _strncmp(param_1,(char *)(uint64_t)g_0278a8f8,param_3);
            if (iVar7 != 0) {
              *arg1 = *this_ptr;
              if (*(int64_t *)PTR____stack_chk_guard_024a9898 == local_38) {
                return this_ptr + 1;
              }
              goto LAB_00f30244;
            }
            puVar2 = &g_0278a8f8;
            lVar10 = 4;
          }
        }
      }
    }
    *arg1 = (&g_0278a8bc)[lVar10 * 0x10];
    *param_2 = 1;
    if (*(int64_t *)PTR____stack_chk_guard_024a9898 == local_38) {
      return this_ptr + *puVar2;
    }
    goto LAB_00f30244;
  }
  if (this_ptr[2] == 0x78) {
    if (((this_ptr[3] != 0) && (pcVar1 = _strchr(param_1,(int)param_2), pcVar1 != (char *)0x0)) &&
       (*pcVar1 != '\0')) {
      lVar10 = (int64_t)pcVar1 - (int64_t)this_ptr;
      cVar8 = pcVar1[-1];
      if (cVar8 == 'x') {
LAB_00f30097:
        uVar6 = 0;
      }
      else {
        pcVar1 = pcVar1 + -2;
        iVar7 = 1;
        uVar6 = 0;
        do {
          iVar5 = -0x30;
          if (((9 < (byte)(cVar8 - 0x30U)) && (iVar5 = -0x57, 5 < (byte)(cVar8 + 0x9fU))) &&
             (iVar5 = -0x37, 5 < (byte)(cVar8 + 0xbfU))) goto LAB_00f3018c;
          uVar6 = uVar6 + (uint)((cVar8 + iVar5) * iVar7);
          iVar7 = iVar7 << 4;
          cVar8 = *pcVar1;
          pcVar1 = pcVar1 + -1;
        } while (cVar8 != 'x');
      }
LAB_00f30147:
      if ((int)param_1 == 1) {
        local_78[0] = 0;
        local_78[1] = 0;
        local_78[2] = g_023e4d20;
        local_78[3] = _UNK_023e4d28;
        local_58 = g_023e4d30;
        uStack_50 = _UNK_023e4d38;
        local_48 = 0xfc;
        if (uVar6 < 0x80) {
          *param_2 = 1;
          lVar4 = 1;
        }
        else {
          if (uVar6 < 0x800) {
            *param_2 = 2;
          }
          else {
            if (uVar6 < 0x10000) {
              *param_2 = 3;
            }
            else {
              if (0x1fffff < uVar6) {
                *param_2 = 0;
                goto LAB_00f30229;
              }
              *param_2 = 4;
              arg1[3] = (byte)uVar6 & 0x3f | 0x80;
              uVar6 = uVar6 >> 6;
            }
            arg1[2] = (byte)uVar6 & 0x3f | 0x80;
            uVar6 = uVar6 >> 6;
          }
          arg1[1] = (byte)uVar6 & 0x3f | 0x80;
          uVar6 = uVar6 >> 6;
          lVar4 = (int64_t)*param_2;
        }
        *arg1 = (byte)uVar6 | (byte)*(void*)(local_78 + lVar4);
      }
      else {
        *arg1 = (byte)uVar6;
        *param_2 = 1;
      }
LAB_00f30229:
      if (*(int64_t *)PTR____stack_chk_guard_024a9898 == local_38) {
        return this_ptr + lVar10 + 1;
      }
      goto LAB_00f30244;
    }
  }
  else {
    pcVar1 = _strchr(param_1,(int)param_2);
    if ((pcVar1 != (char *)0x0) && (*pcVar1 != '\0')) {
      lVar10 = (int64_t)pcVar1 - (int64_t)this_ptr;
      bVar9 = pcVar1[-1];
      if (bVar9 == 0x23) goto LAB_00f30097;
      pbVar3 = (byte *)(pcVar1 + -2);
      iVar7 = 1;
      uVar6 = 0;
      do {
        if (9 < (byte)(bVar9 - 0x30)) goto LAB_00f3018c;
        uVar6 = uVar6 + (bVar9 - 0x30) * iVar7;
        iVar7 = iVar7 * 10;
        bVar9 = *pbVar3;
        pbVar3 = pbVar3 + -1;
      } while (bVar9 != 0x23);
      goto LAB_00f30147;
    }
  }
LAB_00f3018c:
  if (*(int64_t *)PTR____stack_chk_guard_024a9898 == local_38) {
    return (byte *)0x0;
  }
LAB_00f30244:
                      ___stack_chk_fail();
}

