// Function: FUN_01eceb50
// Address: 01eceb50
// Size: 2038 bytes
// Class: GNTextAutoCompleterItem

uint64_t FUN_01eceb50(void)

{
  int64_t lVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  char *pcVar7;
  int64_t *plVar8;
  void*arg1;
  int64_t *this_ptr;
  int64_t *plVar9;
  uint64_t unaff_R15;
  uint64_t uVar10;
  undefined7 uVar11;
  bool bVar12;
  int64_t local_d8;
  char local_d0;
  int64_t *local_c8;
  char local_c0;
  int64_t local_b8;
  char local_b0;
  int64_t *local_a8;
  char local_a0;
  int64_t *local_98;
  char local_90;
  int64_t local_88;
  char local_80;
  char local_48 [8];
  int64_t *local_40;
  char local_38 [8];
  
  iVar3 = FUN_00d8c7a0();
  if (iVar3 == 0) goto LAB_01ecef03;
  (**(code **)(*this_ptr + 0x520))();
  cVar2 = FUN_00d90eb0();
  if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (cVar2 != '\0') {
    FUN_01e10550();
    FUN_00d8c7a0();
    FUN_00e7b4e0();
    if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    FUN_01e10550();
    plVar9 = local_40;
    lVar1 = g_027d64a0;
    if (g_027d64a0 != 0) {
      FUN_00d50b00();
    }
    cVar2 = FUN_00d8f400();
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    lVar1 = g_027d64a0;
    if (cVar2 == '\0') {
      plVar9 = (int64_t *)*arg1;
      if (g_027d64a0 != 0) {
        FUN_00d50b00();
      }
      FUN_01e15f00();
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
    }
    uVar10 = CONCAT71((int7)((uint64_t)plVar9 >> 8),1);
    FUN_01e148d0();
    goto LAB_01ecef06;
  }
  FUN_00d8cbc0();
  cVar2 = FUN_00d9bc90();
  if (cVar2 == '\0') {
    FUN_00d8cbc0();
    cVar2 = FUN_00d9bcc0();
    if (cVar2 == '\0') {
      cVar2 = (**(code **)(*this_ptr + 0x510))();
      if (cVar2 != '\0') {
        (**(code **)(*this_ptr + 0x4c8))();
        plVar9 = local_40;
        if (local_40 == (int64_t *)0x0) {
          plVar9 = (int64_t *)0x0;
        }
        else if (local_38[0] == '\0') {
          FUN_00d50b00();
          if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          local_38[0] = '\0';
        }
        if (plVar9 != (int64_t *)0x0) {
          iVar3 = FUN_00d8c7a0();
          lVar1 = g_027fe6f8;
          if (iVar3 == 0) {
            plVar8 = (int64_t *)0x0;
            uVar10 = 0;
          }
          else {
            if (g_027fe6f8 != 0) {
              FUN_00d50b00();
            }
            local_d8 = lVar1;
            local_d0 = '\x01';
            local_c0 = '\0';
            local_c8 = plVar9;
            (**(code **)(*this_ptr + 0x4a8))(&local_c8,&local_d8,0);
            plVar8 = local_40;
            if (local_40 == (int64_t *)0x0) {
              bVar12 = true;
              plVar8 = (int64_t *)0x0;
            }
            else {
              if (local_38[0] == '\0') {
                FUN_00d50b00();
                bVar12 = false;
                if ((local_38[0] == '\0') || (local_40 == (int64_t *)0x0)) goto LAB_01ecef4e;
                FUN_00d50b20();
              }
              else {
                local_38[0] = '\0';
              }
              bVar12 = false;
            }
LAB_01ecef4e:
            if ((local_c0 != '\0') && (local_c8 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            if ((local_d0 != '\0') && (local_d8 != 0)) {
              FUN_00d50b20();
            }
            if (!bVar12) {
              local_38[0] = '\0';
              local_40 = plVar8;
              FUN_00d214d0();
              if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
            }
            lVar1 = g_027fe6f8;
            if (*(int *)(this_ptr[5] + 0xc) == 0) {
              if (g_027fe6f8 != 0) {
                FUN_00d50b00();
              }
              local_b8 = lVar1;
              local_b0 = '\x01';
              local_a0 = '\0';
              local_a8 = plVar9;
              (**(code **)(*this_ptr + 0x4a8))(&local_a8,&local_b8,1);
              plVar9 = local_40;
              uVar11 = (undefined7)((uint64_t)unaff_R15 >> 8);
              if (local_40 == plVar8) {
LAB_01ecf06d:
                unaff_R15 = CONCAT71(uVar11,plVar8 == (int64_t *)0x0);
                if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
              }
              else {
                if (local_38[0] == '\0') {
                  if (local_40 != (int64_t *)0x0) {
                    FUN_00d50b00();
                  }
                  bVar12 = plVar8 != (int64_t *)0x0;
                  plVar8 = plVar9;
                  if (bVar12) {
                    FUN_00d50b20();
                  }
                  goto LAB_01ecf06d;
                }
                if (plVar8 != (int64_t *)0x0) {
                  FUN_00d50b20();
                }
                local_38[0] = '\0';
                unaff_R15 = CONCAT71(uVar11,plVar9 == (int64_t *)0x0);
                plVar8 = plVar9;
              }
              if ((local_a0 != '\0') && (local_a8 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
              if ((local_b0 != '\0') && (local_b8 != 0)) {
                FUN_00d50b20();
              }
              if ((char)unaff_R15 == '\0') {
                local_38[0] = '\0';
                local_40 = plVar8;
                FUN_00d214d0();
                if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
              }
            }
            uVar10 = CONCAT71((int7)((uint64_t)unaff_R15 >> 8),1);
            if (*(int *)(this_ptr[5] + 0xc) != 0) {
              FUN_00d242c0();
              FUN_00d23310();
              plVar9 = local_40;
              pcVar7 = local_48;
              if (local_38[0] != '\0') {
                pcVar7 = local_38;
              }
              local_48[0] = local_38[0];
              *pcVar7 = '\0';
              if ((local_38[0] != '\0') && (plVar9 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
              (**(code **)(*plVar9 + 0x370))();
              lVar1 = local_88;
              if (local_80 == '\0') {
                if (local_88 != 0) {
                  FUN_00d50b00();
                }
              }
              else {
                local_80 = '\0';
              }
              (**(code **)(*this_ptr + 0x488))();
              if (lVar1 != 0) {
                FUN_00d50b20();
              }
              if ((local_80 != '\0') && (local_88 != 0)) {
                FUN_00d50b20();
              }
              if (local_48[0] != '\0') {
                FUN_00d50b20();
              }
              iVar3 = FUN_01e15b70();
              FUN_00d8c7a0();
              FUN_00d8c7a0();
              FUN_00d8f140();
              plVar9 = local_40;
              if (local_40 == (int64_t *)0x0) {
                plVar9 = (int64_t *)0x0;
              }
              else if (((local_38[0] == '\0') && (FUN_00d50b00(), local_38[0] != '\0')) &&
                      (local_40 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
              local_90 = '\0';
              local_98 = plVar9;
              FUN_01e15f00();
              if ((local_90 != '\0') && (local_98 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
              iVar4 = FUN_00d8c7a0();
              iVar5 = FUN_00d8c7a0();
              iVar6 = FUN_00d8c7a0();
              FUN_01e148d0(iVar4 + iVar3,(uint64_t)(uint)(iVar5 - iVar6) << 0x20);
              if (*(int *)(this_ptr[5] + 0xc) < 2) {
                (**(code **)(*this_ptr + 0x530))();
              }
              else {
                (**(code **)(*this_ptr + 0x4f8))();
              }
              if (plVar9 != (int64_t *)0x0) {
                FUN_00d50b20();
              }
            }
          }
          FUN_00d50b20();
          if (plVar8 != (int64_t *)0x0) {
            FUN_00d50b20();
          }
          goto LAB_01ecef06;
        }
      }
LAB_01ecef03:
      uVar10 = 0;
      goto LAB_01ecef06;
    }
  }
  (**(code **)(*this_ptr + 0x530))();
  uVar10 = 0;
LAB_01ecef06:
  return uVar10 & 0xffffffff;
}

