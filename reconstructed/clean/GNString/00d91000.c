// Function: FUN_00d91000
// Address: 00d91000
// Size: 1997 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


void* FUN_00d91000(byte param_1,int64_t *param_2)

{
  int64_t lVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  void*puVar6;
  char *pcVar7;
  uint64_t uVar8;
  uint64_t uVar9;
  char *pcVar10;
  void*puVar11;
  int64_t *plVar12;
  int64_t *plVar13;
  int64_t arg1;
  void*this_ptr;
  char *pcVar14;
  uint uVar15;
  uint uVar16;
  uint64_t uVar17;
  bool bVar18;
  int64_t local_90;
  char local_88;
  byte local_5c;
  void*local_50;
  char local_48;
  void*local_38;
  
  plVar13 = param_2;
  if ((*(int64_t *)(arg1 + 0x10) == 0) && (iVar5 = *(int *)(arg1 + 0x20), iVar5 != -1)) {
    if (iVar5 < 0x18) {
      plVar12 = (int64_t *)(arg1 + 0x28);
    }
    else {
      plVar12 = (int64_t *)FUN_00e83010(iVar5 + 1);
      iVar5 = *(int *)(arg1 + 0x20);
    }
    FUN_00da41a0(iVar5,0);
    *(void*)((int64_t)plVar12 + (int64_t)*(int *)(arg1 + 0x20)) = 0;
    local_50 = (void*)0x0;
    plVar13 = plVar12;
    cVar3 = FUN_00e31450(3);
    if ((cVar3 == '\0') && (plVar12 != (int64_t *)(arg1 + 0x28))) {
      FUN_00e83070();
    }
  }
  puVar6 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  pcVar10 = &g_02572358;
  *puVar6 = &g_02572358;
  (*g_02572370)();
  lVar1 = g_028a8368;
  pcVar14 = *(char **)(arg1 + 0x10);
  if ((pcVar14 == (char *)0x0) || (*pcVar14 == '\0')) {
    if (param_1 == 0) {
      if (g_028a8368 != 0) {
        FUN_00d50b00();
      }
      FUN_00d21140();
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
    }
    *this_ptr = puVar6;
    *(void*)(this_ptr + 1) = 1;
  }
  else {
    pcVar7 = _strrchr(pcVar10,(int)plVar13);
    if (pcVar7 == (char *)0x0) {
      iVar5 = FUN_00e7dde0();
      pcVar7 = pcVar14 + iVar5;
      bVar2 = false;
      local_38 = (void*)0x0;
      do {
        lVar1 = *param_2;
        if (*(int64_t *)(lVar1 + 0x10) == 0) {
          uVar15 = *(uint *)(lVar1 + 0x20);
          pcVar10 = (char *)(uint64_t)uVar15;
          if (uVar15 != 0xffffffff) {
            if ((int)uVar15 < 0x18) {
              plVar12 = (int64_t *)(lVar1 + 0x28);
            }
            else {
              plVar12 = (int64_t *)FUN_00e83010(uVar15 + 1);
              pcVar10 = (char *)(uint64_t)*(uint *)(lVar1 + 0x20);
            }
            FUN_00da41a0(pcVar10,0);
            *(void*)((int64_t)plVar12 + (int64_t)*(int *)(lVar1 + 0x20)) = 0;
            uVar9 = 0;
            plVar13 = plVar12;
            cVar3 = FUN_00e31450(3);
            bVar18 = plVar12 == (int64_t *)(lVar1 + 0x28);
            pcVar10 = (char *)CONCAT71((int7)((uint64_t)uVar9 >> 8),bVar18);
            if (cVar3 == '\0' && !bVar18) {
              FUN_00e83070();
            }
          }
        }
        pcVar10 = _strstr(pcVar10,(char *)plVar13);
        if (pcVar10 == (char *)0x0) {
          FUN_00d91a70();
          if ((local_88 == '\0') && (local_90 != 0)) {
            FUN_00d50b00();
          }
          FUN_00d21140();
          if (local_90 != 0) {
            FUN_00d50b20();
          }
          break;
        }
        uVar15 = (int)pcVar10 - (int)pcVar14;
        if ((uVar15 != 0) || (param_1 == 0)) {
          puVar11 = (void*)FUN_00e8fc40();
          FUN_00d4ff40();
          *puVar11 = &g_025795a8;
          FUN_00d500e0();
          if (puVar11 == local_38) {
            puVar11 = local_38;
            if (bVar2) {
              FUN_00d50b20();
              bVar18 = bVar2;
            }
            else {
              bVar18 = true;
            }
          }
          else {
            bVar18 = true;
            if ((bVar2) && (local_38 != (void*)0x0)) {
              FUN_00d50b20();
            }
          }
          bVar2 = bVar18;
          local_38 = puVar11;
          if (uVar15 != 0) {
            if (((void*)local_38[2] != (void*)0x0) &&
               ((void*)local_38[2] != local_38 + 5)) {
              FUN_00e83070();
            }
            local_38[2] = 0;
            if (*(int *)(local_38 + 4) != -1) {
              FUN_00e83070();
              local_38[3] = 0;
              *(void*)(local_38 + 4) = 0xffffffff;
            }
            plVar13 = (int64_t *)(uint64_t)uVar15;
            FUN_00d8dd20(0);
          }
          *(byte *)((int64_t)local_38 + 0x24) = *(byte *)((int64_t)local_38 + 0x24) & 0xfe;
          FUN_00d21140();
          pcVar14 = pcVar10;
        }
        pcVar10 = (char *)*param_2;
        iVar5 = *(int *)(pcVar10 + 0x20);
        if (iVar5 == -1) {
          if (*(int64_t *)(pcVar10 + 0x10) == 0) {
            iVar5 = 0;
          }
          else {
            iVar5 = FUN_00e7dde0();
          }
        }
        pcVar14 = pcVar14 + iVar5;
      } while (pcVar14 < pcVar7);
    }
    else {
      if (*(int *)(arg1 + 0x20) == -1) {
        FUN_00e7dde0();
      }
      uVar8 = FUN_00e7b4e0();
      uVar17 = uVar8 >> 0x20;
      if ((int)(uVar8 >> 0x20) < 1) {
        bVar2 = false;
        local_38 = (void*)0x0;
      }
      else {
        local_5c = param_1 ^ 1;
        local_38 = (void*)0x0;
        bVar2 = false;
        do {
          uVar9 = FUN_00d906a0();
          if (((int)uVar9 == -1) || (iVar5 = (int)((uint64_t)uVar9 >> 0x20), iVar5 == 0)) {
            FUN_00d8e3d0();
            if (local_50 == local_38) {
              if ((bVar2) || (local_38 == (void*)0x0)) {
                if ((local_48 != '\0') && (local_50 != (void*)0x0)) {
                  FUN_00d50b20();
                }
              }
              else {
                bVar2 = true;
                if (local_48 == '\0') {
                  FUN_00d50b00();
                }
              }
            }
            else if (local_48 == '\0') {
              if (local_50 != (void*)0x0) {
                FUN_00d50b00();
              }
              if ((!bVar2) || (local_38 == (void*)0x0)) goto LAB_00d91761;
              FUN_00d50b20();
              local_38 = local_50;
              bVar2 = true;
            }
            else if ((bVar2) && (local_38 != (void*)0x0)) {
              FUN_00d50b20();
              local_38 = local_50;
              bVar2 = true;
            }
            else {
LAB_00d91761:
              local_38 = local_50;
              bVar2 = true;
            }
            *(byte *)((int64_t)local_38 + 0x24) = *(byte *)((int64_t)local_38 + 0x24) & 0xfe;
            FUN_00d21140();
            break;
          }
          FUN_00e7b4e0();
          FUN_00d8e3d0();
          if (local_50 == local_38) {
            if ((bVar2) || (local_50 == (void*)0x0)) {
              if ((local_48 != '\0') && (local_50 != (void*)0x0)) {
                FUN_00d50b20();
                goto LAB_00d91230;
              }
            }
            else {
              bVar2 = true;
              if (local_48 == '\0') {
                FUN_00d50b00();
              }
            }
            iVar4 = *(int *)(local_38 + 4);
          }
          else if (local_48 == '\0') {
            if (local_50 != (void*)0x0) {
              FUN_00d50b00();
            }
            if (!bVar2) goto LAB_00d91200;
            bVar2 = true;
            if (local_38 != (void*)0x0) {
              FUN_00d50b20();
              local_38 = local_50;
              goto LAB_00d91230;
            }
            iVar4 = *(int *)(local_50 + 4);
            local_38 = local_50;
          }
          else if ((bVar2) && (local_38 != (void*)0x0)) {
            FUN_00d50b20();
            local_38 = local_50;
            bVar2 = true;
LAB_00d91230:
            iVar4 = *(int *)(local_38 + 4);
          }
          else {
LAB_00d91200:
            bVar2 = true;
            iVar4 = *(int *)(local_50 + 4);
            local_38 = local_50;
          }
          if (iVar4 == -1) {
            if (local_38[2] == 0) {
              iVar4 = 0;
            }
            else {
              iVar4 = FUN_00e7dde0();
            }
          }
          if ((iVar4 != 0 | local_5c) == 1) {
            *(byte *)((int64_t)local_38 + 0x24) = *(byte *)((int64_t)local_38 + 0x24) & 0xfe;
            local_48 = '\0';
            FUN_00d21140();
            local_50 = local_38;
          }
          uVar15 = iVar5 + (int)uVar9;
          uVar16 = ((int)uVar17 + (int)uVar8) - uVar15;
          uVar17 = (uint64_t)uVar16;
          uVar8 = (uint64_t)uVar15;
        } while (0 < (int)uVar16);
      }
    }
    *this_ptr = puVar6;
    *(void*)(this_ptr + 1) = 1;
    if ((bVar2) && (local_38 != (void*)0x0)) {
      FUN_00d50b20();
    }
  }
  return this_ptr;
}

