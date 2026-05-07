// Function: FUN_014e7f40
// Address: 014e7f40
// Size: 2467 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


int64_t FUN_014e7f40(char *param_1,char param_2,char param_3)

{
  dword dVar1;
  int64_t lVar2;
  char cVar3;
  int iVar4;
  void *pvVar5;
  int64_t lVar6;
  int64_t lVar7;
  int64_t lVar8;
  char *pcVar9;
  int64_t lVar10;
  void* pVar11;
  char *pcVar12;
  int64_t *plVar13;
  int64_t arg1;
  char *pcVar14;
  int64_t *this_ptr;
  double dVar15;
  uint64_t extraout_XMM0_Qa;
  uint64_t extraout_XMM0_Qa_00;
  uint64_t uVar16;
  int64_t local_108;
  char local_100;
  int64_t local_f8;
  char local_f0;
  int64_t *local_b8;
  char local_b0;
  int64_t local_a8;
  char local_a0;
  int64_t local_98;
  int64_t local_90;
  char *local_88;
  char *local_58;
  int64_t *local_50;
  char local_48 [8];
  int64_t local_40;
  char local_38 [8];
  
  pcVar12 = param_1;
  (**(code **)(*this_ptr + 0x378))();
  pVar11 = (void*)pcVar12;
  if ((((local_48[0] == '\0') && (local_50 != (int64_t *)0x0)) &&
      (FUN_00d50b00(), local_48[0] != '\0')) && (local_50 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  pvVar5 = _pthread_getspecific(pVar11);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  iVar4 = FUN_01326de0();
  if (iVar4 == 3) {
    pvVar5 = _pthread_getspecific(pVar11);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01320d00();
    pvVar5 = _pthread_getspecific(pVar11);
    plVar13 = local_50;
    if ((pvVar5 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
      plVar13 = (int64_t *)local_50[(uint64_t)(*(uint *)(lVar6 + 0x154) & 1) + 4];
    }
    dVar15 = (double)(**(code **)(*plVar13 + 0x370))();
    if ((local_48[0] != '\0') && (local_50 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    local_90 = (**(code **)(*this_ptr + 0x380))();
    local_98 = (**(code **)(*this_ptr + 0x388))();
    lVar7 = (**(code **)(*this_ptr + 0x398))();
    lVar10 = 0;
    lVar6 = arg1;
    if (param_2 != '\0') {
      lVar10 = arg1;
      lVar6 = 0;
    }
    if (param_3 == '\0') {
      if (param_2 == '\0') {
        if (this_ptr[0x23] != 0) {
          local_40 = this_ptr[0x23];
          FUN_00d50b00();
          pvVar5 = _pthread_getspecific(pVar11);
          local_88 = param_1;
          if ((pvVar5 == (void *)0x0) || (lVar8 = FUN_00e8b990(), lVar8 == 0)) {
            lVar2 = *(int64_t *)(local_40 + 0x110);
            lVar8 = local_40;
          }
          else {
            lVar8 = *(int64_t *)(local_40 + 0x20 + (uint64_t)(*(uint *)(lVar8 + 0x154) & 1) * 8);
            lVar2 = *(int64_t *)(lVar8 + 0x110);
          }
          if (lVar2 != 0) {
            FUN_00d64850();
            *(void*)(lVar8 + 0x110) = 0;
            FUN_00d64910();
          }
          if (this_ptr[0x23] != 0) {
            FUN_00d64850();
            this_ptr[0x23] = 0;
            FUN_00d64910();
          }
          FUN_00d50b20();
          param_1 = local_88;
        }
      }
      else if (this_ptr[0x22] != 0) {
        local_88 = param_1;
        local_40 = this_ptr[0x22];
        FUN_00d50b00();
        if (this_ptr[0x22] != 0) {
          FUN_00d64850();
          this_ptr[0x22] = 0;
          FUN_00d64910();
        }
        pvVar5 = _pthread_getspecific(pVar11);
        if ((pvVar5 == (void *)0x0) || (lVar8 = FUN_00e8b990(), lVar8 == 0)) {
          lVar2 = *(int64_t *)(local_40 + 0x118);
          lVar8 = local_40;
        }
        else {
          lVar8 = *(int64_t *)(local_40 + 0x20 + (uint64_t)(*(uint *)(lVar8 + 0x154) & 1) * 8);
          lVar2 = *(int64_t *)(lVar8 + 0x118);
        }
        if (lVar2 != 0) {
          FUN_00d64850();
          *(void*)(lVar8 + 0x118) = 0;
          FUN_00d64910();
        }
        FUN_00d50b20();
        param_1 = local_88;
      }
    }
    cVar3 = (**(code **)(*this_ptr + 1000))();
    if (cVar3 != '\0') {
      pVar11 = (void*)(dVar15 * g_0241b6a8);
      local_98 = local_98 + local_90;
      pcVar14 = (char *)(lVar6 + local_98);
      local_58 = (char *)(lVar10 + local_90);
      pcVar12 = (char *)(int64_t)(int)pVar11;
      if (param_2 == '\0') {
        if ((int64_t)pcVar14 - (int64_t)local_58 < (int64_t)pcVar12) {
          pcVar14 = local_58 + (int64_t)pcVar12;
        }
        if ((int64_t)param_1 < (int64_t)pcVar14) {
          pcVar14 = param_1;
        }
        pvVar5 = _pthread_getspecific(pVar11);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        iVar4 = FUN_0134c230();
        if (arg1 < 1) {
          while( true ) {
            cVar3 = (**(code **)(*this_ptr + 1000))();
            pVar11 = (void*)pcVar12;
            dVar1 = MACH_HEADER.filetype;
            if (cVar3 != '\0') {
              FUN_00d23340();
              local_38[0] = local_48[0];
              pcVar12 = local_38;
              pcVar9 = local_48;
              if (local_48[0] == '\0') {
                pcVar9 = pcVar12;
              }
              *pcVar9 = '\0';
              if ((local_48[0] != '\0') && (local_50 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
              if ((local_38[0] == '\0') && (local_50 != (int64_t *)0x0)) {
                FUN_00d50b00();
              }
              dVar1 = *(dword *)((int64_t)local_50 + 0xc);
              FUN_00d50b20();
              pVar11 = (void*)pcVar12;
            }
            if ((int)dVar1 <= iVar4) break;
            cVar3 = (**(code **)(*this_ptr + 1000))();
            if (cVar3 == '\0') {
              plVar13 = (int64_t *)0x0;
            }
            else {
              FUN_00d23340();
              local_38[0] = local_48[0];
              pcVar12 = local_38;
              pcVar9 = local_48;
              if (local_48[0] == '\0') {
                pcVar9 = pcVar12;
              }
              *pcVar9 = '\0';
              if ((local_48[0] != '\0') && (local_50 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
              plVar13 = local_50;
              if ((local_38[0] == '\0') && (local_50 != (int64_t *)0x0)) {
                FUN_00d50b00();
              }
            }
            FUN_014c2cf0();
            if (plVar13 != (int64_t *)0x0) {
              FUN_00d50b20();
            }
          }
        }
        else {
          while( true ) {
            cVar3 = (**(code **)(*this_ptr + 1000))();
            pVar11 = (void*)pcVar12;
            uVar16 = extraout_XMM0_Qa;
            dVar1 = MACH_HEADER.filetype;
            if (cVar3 != '\0') {
              FUN_00d23340();
              local_38[0] = local_48[0];
              pcVar12 = local_38;
              pcVar9 = local_48;
              if (local_48[0] == '\0') {
                pcVar9 = pcVar12;
              }
              *pcVar9 = '\0';
              if ((local_48[0] != '\0') && (local_50 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
              if ((local_38[0] == '\0') && (local_50 != (int64_t *)0x0)) {
                FUN_00d50b00();
              }
              dVar1 = *(dword *)((int64_t)local_50 + 0xc);
              uVar16 = FUN_00d50b20();
              pVar11 = (void*)pcVar12;
            }
            if (iVar4 <= (int)dVar1) break;
            FUN_014d63b0(uVar16,1);
            if ((local_f0 != '\0') && (local_f8 != 0)) {
              FUN_00d50b20();
            }
          }
        }
        lVar6 = (int64_t)pcVar14 - local_98;
      }
      else {
        if ((int64_t)pcVar14 - (int64_t)local_58 < (int64_t)pcVar12) {
          local_58 = pcVar14 + -(int64_t)pcVar12;
        }
        if ((int64_t)local_58 < (int64_t)param_1) {
          local_58 = param_1;
        }
        pvVar5 = _pthread_getspecific(pVar11);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        iVar4 = FUN_0134c230();
        if (arg1 < 0) {
          while( true ) {
            cVar3 = (**(code **)(*this_ptr + 1000))();
            pVar11 = (void*)pcVar12;
            uVar16 = extraout_XMM0_Qa_00;
            dVar1 = MACH_HEADER.filetype;
            if (cVar3 != '\0') {
              lVar6 = **(int64_t **)(this_ptr[0x21] + 0x10);
              if (lVar6 != 0) {
                FUN_00d50b00();
              }
              dVar1 = *(dword *)(lVar6 + 0xc);
              uVar16 = FUN_00d50b20();
              pVar11 = (void*)pcVar12;
            }
            if ((int)dVar1 <= iVar4) break;
            FUN_014d61f0(uVar16,1);
            if ((local_100 != '\0') && (local_108 != 0)) {
              FUN_00d50b20();
            }
          }
        }
        else {
          while( true ) {
            cVar3 = (**(code **)(*this_ptr + 1000))();
            pVar11 = (void*)pcVar12;
            dVar1 = MACH_HEADER.filetype;
            if (cVar3 != '\0') {
              lVar6 = **(int64_t **)(this_ptr[0x21] + 0x10);
              if (lVar6 != 0) {
                FUN_00d50b00();
              }
              dVar1 = *(dword *)(lVar6 + 0xc);
              FUN_00d50b20();
              pVar11 = (void*)pcVar12;
            }
            if (iVar4 <= (int)dVar1) break;
            cVar3 = (**(code **)(*this_ptr + 1000))();
            if (cVar3 == '\0') {
              lVar6 = 0;
            }
            else {
              lVar6 = **(int64_t **)(this_ptr[0x21] + 0x10);
              if (lVar6 != 0) {
                FUN_00d50b00();
              }
            }
            FUN_014c2cf0();
            if (lVar6 != 0) {
              FUN_00d50b20();
            }
          }
        }
        lVar8 = (**(code **)(*this_ptr + 0x390))();
        FUN_00d64850();
        lVar6 = (int64_t)local_58 - local_90;
        lVar10 = 0;
        if (-1 < lVar8 - lVar6) {
          lVar10 = lVar8 - lVar6;
        }
        this_ptr[0x1a] = lVar10;
        FUN_00d64910();
      }
      FUN_014bb250();
      FUN_014bb2b0();
      pvVar5 = _pthread_getspecific(pVar11);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      cVar3 = FUN_01334f30();
      if (cVar3 != '\0') {
        local_b0 = '\0';
        local_b8 = local_50;
        FUN_014c0100(&local_b8,1);
        if ((local_b0 != '\0') && (local_b8 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        FUN_014bd410();
      }
      if (param_3 == '\0') {
        local_a0 = '\0';
        local_a8 = 0;
        FUN_014dcf30();
        if ((local_a0 != '\0') && (local_a8 != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        lVar10 = (**(code **)(*this_ptr + 0x388))();
        lVar7 = (lVar7 + local_90) - (int64_t)local_58;
        if (lVar10 < lVar7) {
          lVar7 = (**(code **)(*this_ptr + 0x388))();
        }
        FUN_00d64850();
        this_ptr[0x1b] = lVar7;
        FUN_00d64910();
      }
      FUN_014bfad0();
      goto LAB_014e88f7;
    }
  }
  lVar6 = 0;
LAB_014e88f7:
  if (local_50 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  return lVar6;
}

