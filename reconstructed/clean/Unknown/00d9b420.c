// Function: FUN_00d9b420
// Address: 00d9b420
// Size: 1185 bytes
// Class: Unknown

int64_t * FUN_00d9b420(uint64_t param_1,uint32_t param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  int64_t lVar5;
  int64_t *arg1;
  int64_t *this_ptr;
  int64_t lVar6;
  int64_t local_80;
  char local_78 [8];
  int64_t local_70;
  char local_68;
  int64_t local_60;
  int local_58;
  int iStack_54;
  int local_50;
  uint32_t local_44;
  char local_38 [8];
  
  local_60 = *arg1;
  if (local_60 == 0) {
    *(void*)(this_ptr + 1) = 0;
    lVar5 = 0;
LAB_00d9b8b2:
    *this_ptr = lVar5;
    *(void*)(this_ptr + 1) = 1;
  }
  else {
    local_68 = '\0';
    local_70 = 0;
    local_58 = -1;
    iStack_54 = 0;
    local_50 = 0;
    bVar1 = false;
    lVar6 = 0;
    local_44 = param_2;
    iVar3 = 0;
LAB_00d9b486:
    if (iStack_54 != 0) {
      if (iStack_54 < 1) {
        iStack_54 = -iStack_54;
      }
      else {
        local_58 = local_58 - iStack_54;
        FUN_00d23690();
        local_50 = local_50 + iStack_54;
        iStack_54 = 0;
      }
    }
    lVar5 = (int64_t)local_58;
    local_58 = local_58 + 1;
    if (*(int *)(local_60 + 0xc) <= local_58) {
      FUN_00018280();
      if (lVar6 == 0) {
        lVar5 = 0;
      }
      else {
        iVar2 = *(int *)(lVar6 + 0x20);
        lVar5 = lVar6;
        if (iVar2 == -1) {
          if (*(int64_t *)(lVar6 + 0x10) != 0) {
            iVar2 = FUN_00e7dde0();
            goto LAB_00d9b67e;
          }
          if (-1 < iVar3) goto LAB_00d9b88f;
        }
        else {
LAB_00d9b67e:
          if (iVar2 <= iVar3) goto LAB_00d9b88f;
        }
        if ((char)local_44 != '\0') {
          if ((((*(int *)(lVar6 + 0x20) == -1) && (*(int64_t *)(lVar6 + 0x10) != 0)) &&
              (FUN_00e7dde0(), *(int *)(lVar6 + 0x20) == -1)) && (*(int64_t *)(lVar6 + 0x10) != 0))
          {
            FUN_00e7dde0();
          }
          FUN_00e7b4e0();
          FUN_00d8e3d0();
          lVar5 = local_70;
          if (local_70 == lVar6) {
            if (bVar1) {
              lVar5 = lVar6;
              if ((local_68 != '\0') && (local_70 != 0)) {
                FUN_00d50b20();
              }
            }
            else {
              lVar5 = lVar6;
              if (local_68 == '\0') {
                FUN_00d50b00();
              }
            }
          }
          else if (local_68 == '\0') {
            if (local_70 != 0) {
              FUN_00d50b00();
            }
            if (bVar1) {
              FUN_00d50b20();
            }
          }
          else if (bVar1) {
            FUN_00d50b20();
          }
          *(void*)(this_ptr + 1) = 0;
          goto LAB_00d9b8b2;
        }
        FUN_00e7b4e0();
        FUN_00d8e3d0();
        lVar5 = local_70;
        if (local_70 == lVar6) {
          if ((bVar1) || (local_70 == 0)) {
            lVar5 = lVar6;
            if ((local_68 != '\0') && (local_70 != 0)) {
              FUN_00d50b20();
            }
          }
          else {
            bVar1 = true;
            lVar5 = lVar6;
            if (local_68 == '\0') {
              FUN_00d50b00();
            }
          }
        }
        else if (local_68 == '\0') {
          if (local_70 != 0) {
            FUN_00d50b00();
          }
          if (!bVar1) goto LAB_00d9b7c6;
          FUN_00d50b20();
          bVar1 = true;
        }
        else if (bVar1) {
          FUN_00d50b20();
          bVar1 = true;
        }
        else {
LAB_00d9b7c6:
          bVar1 = true;
        }
      }
LAB_00d9b88f:
      *(void*)(this_ptr + 1) = 0;
      if (!bVar1) {
        if (lVar5 == 0) {
          lVar5 = 0;
        }
        else {
          FUN_00d50b00();
        }
      }
      goto LAB_00d9b8b2;
    }
    local_70 = *(int64_t *)(*(int64_t *)(local_60 + 0x10) + 8 + lVar5 * 8);
    if (local_58 == 0 && local_50 == 0) {
      FUN_00d23310();
      local_38[0] = local_78[0];
      pcVar4 = local_38;
      if (local_78[0] != '\0') {
        pcVar4 = local_78;
      }
      *pcVar4 = '\0';
      if ((local_78[0] != '\0') && (local_80 != 0)) {
        FUN_00d50b20();
      }
      if (local_80 == lVar6) {
        if ((!bVar1) && (local_80 != 0)) {
          bVar1 = true;
          if (local_38[0] == '\0') {
            FUN_00d50b00();
          }
          goto LAB_00d9b600;
        }
        if (local_38[0] == '\0') {
          iVar3 = *(int *)(lVar6 + 0x20);
        }
        else {
          if (local_80 != 0) {
            FUN_00d50b20();
            goto LAB_00d9b600;
          }
          iVar3 = *(int *)(lVar6 + 0x20);
        }
      }
      else {
        if (local_38[0] == '\0') {
          if (local_80 != 0) {
            FUN_00d50b00();
          }
          if ((bVar1) && (lVar6 != 0)) {
            FUN_00d50b20();
            lVar6 = local_80;
            bVar1 = true;
LAB_00d9b600:
            iVar3 = *(int *)(lVar6 + 0x20);
            goto joined_r0x00d9b649;
          }
        }
        else if ((bVar1) && (lVar6 != 0)) {
          FUN_00d50b20();
          lVar6 = local_80;
          bVar1 = true;
          goto LAB_00d9b600;
        }
        bVar1 = true;
        iVar3 = *(int *)(local_80 + 0x20);
        lVar6 = local_80;
      }
joined_r0x00d9b649:
      if (iVar3 == -1) {
        if (*(int64_t *)(lVar6 + 0x10) == 0) {
          iVar3 = 0;
        }
        else {
          iVar3 = FUN_00e7dde0();
        }
      }
      goto LAB_00d9b486;
    }
    iVar2 = FUN_00d9b160((char)local_44,iVar3);
    if (iVar2 != 0) {
      if (iVar2 < iVar3) {
        iVar3 = iVar2;
      }
      goto LAB_00d9b486;
    }
    *(void*)(this_ptr + 1) = 0;
    *this_ptr = 0;
    FUN_00018280();
    if ((bVar1) && (lVar6 != 0)) {
      FUN_00d50b20();
    }
  }
  return this_ptr;
}

