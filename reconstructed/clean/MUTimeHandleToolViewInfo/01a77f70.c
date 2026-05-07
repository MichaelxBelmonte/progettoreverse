// Function: FUN_01a77f70
// Address: 01a77f70
// Size: 1802 bytes
// Class: MUTimeHandleToolViewInfo
// === MUTimeHandleToolViewInfo properties ===
//                   _viewsWithSelection
//                   _editElement
//                   _removedPredecessors
//                   _removedSuccessors


void FUN_01a77f70(void)

{
  int64_t *plVar1;
  uint64_t uVar2;
  bool bVar3;
  int64_t *plVar4;
  char cVar5;
  void *pvVar6;
  int64_t lVar7;
  uint64_t uVar8;
  uint uVar9;
  int64_t lVar10;
  int iVar11;
  uint64_t *puVar12;
  uint uVar13;
  int64_t *plVar14;
  int64_t *plVar15;
  int64_t local_118;
  uint64_t local_110;
  int64_t *local_108;
  uint64_t local_100;
  uint32_t local_f8;
  uint64_t local_90;
  char local_88;
  uint64_t local_80;
  uint64_t local_78;
  int local_70;
  uint local_64;
  int64_t *local_60;
  char local_58;
  int64_t local_50;
  uint64_t local_48;
  int local_40;
  int64_t *local_38;
  
  FUN_00c9fe20();
  puVar12 = &local_90;
  if ((char)local_110 != '\0') {
    puVar12 = &local_110;
  }
  local_90 = CONCAT71(local_90._1_7_,(char)local_110);
  *(void*)puVar12 = 0;
  if (((char)local_110 != '\0') && (local_118 != 0)) {
    FUN_00d50b20();
  }
  if ((char)local_90 == '\0') {
    if (local_118 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_90 = local_90 & 0xffffffffffffff00;
  }
  FUN_00243390();
  plVar14 = local_60;
  if (local_58 == '\0') {
    if (((local_60 != (int64_t *)0x0) && (FUN_00d50b00(), local_58 != '\0')) &&
       (local_60 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_58 = '\0';
  }
  if (local_118 != 0) {
    FUN_00d50b20();
  }
  if (plVar14 != (int64_t *)0x0) {
    local_110._0_1_ = 0;
    local_108 = plVar14;
    local_f8 = 0;
    local_100 = 0;
    if (0 < *(int *)((int64_t)plVar14 + 0xc)) {
      uVar13 = 0;
      local_38 = plVar14;
      do {
        plVar1 = *(int64_t **)(plVar14[2] + (uint64_t)uVar13 * 8);
        uVar9 = uVar13;
        FUN_01a78a20();
        plVar4 = local_60;
        if (local_58 == '\0') {
          if (((local_60 != (int64_t *)0x0) && (FUN_00d50b00(), local_58 != '\0')) &&
             (local_60 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          local_58 = '\0';
        }
        pvVar6 = _pthread_getspecific(uVar9);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0126e7e0();
        plVar15 = local_60;
        if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if (plVar15 == (int64_t *)0x0) {
          bVar3 = false;
          plVar15 = (int64_t *)0x0;
        }
        else {
          pvVar6 = _pthread_getspecific(uVar9);
          if (pvVar6 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0126e7e0();
          pvVar6 = _pthread_getspecific(uVar9);
          if (pvVar6 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_013f2b00();
          plVar15 = local_60;
          if (local_60 == (int64_t *)0x0) {
            plVar15 = (int64_t *)0x0;
            bVar3 = false;
          }
          else if (local_58 == '\0') {
            FUN_00d50b00();
            bVar3 = true;
            if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
          }
          else {
            local_58 = '\0';
            bVar3 = true;
          }
          if ((local_88 != '\0') && (local_90 != 0)) {
            FUN_00d50b20();
          }
        }
        lVar7 = plVar4[2];
        if (lVar7 != 0) {
          FUN_00d50b00();
          local_58 = '\0';
          local_60 = (int64_t *)0x0;
          local_48 = 0xffffffff;
          local_40 = 0;
          local_64 = 0;
          local_50 = lVar7;
          while( true ) {
            lVar7 = (int64_t)(int)local_48;
            iVar11 = (int)local_48 + 1;
            local_48 = CONCAT44(local_48._4_4_,iVar11);
            if (*(int *)(local_50 + 0xc) <= iVar11) break;
            lVar10 = *(int64_t *)(local_50 + 0x10);
            local_60 = *(int64_t **)(lVar10 + 8 + lVar7 * 8);
            uVar8 = FUN_01e40eb0();
            uVar2 = local_90;
            if ((local_88 != '\0') && (local_90 != 0)) {
              uVar8 = FUN_00d50b20();
            }
            if (uVar2 == 0) {
              local_64 = (uint)CONCAT71((int7)((uint64_t)uVar8 >> 8),1);
              break;
            }
            FUN_01a87f10();
            uVar2 = local_90;
            if (local_88 == '\0') {
              if (local_90 != 0) {
                FUN_00d50b00();
                if ((local_88 != '\0') && (local_90 != 0)) {
                  FUN_00d50b20();
                }
                goto LAB_01a78430;
              }
            }
            else if (local_90 != 0) {
LAB_01a78430:
              local_88 = '\0';
              local_90 = 0;
              local_80 = uVar2;
              local_78 = 0xffffffff;
              local_70 = 0;
              if (plVar15 == (int64_t *)0x0) {
                local_78 = 0;
                if (0 < *(int *)(uVar2 + 0xc)) {
                  local_90 = **(uint64_t **)(uVar2 + 0x10);
LAB_01a7859e:
                  local_64 = (uint)CONCAT71((int7)((uint64_t)lVar10 >> 8),1);
                  (**(code **)(*local_60 + 0x620))();
                }
              }
              else {
                while( true ) {
                  lVar7 = (int64_t)(int)local_78;
                  iVar11 = (int)local_78 + 1;
                  local_78 = CONCAT44(local_78._4_4_,iVar11);
                  if (*(int *)(local_80 + 0xc) <= iVar11) break;
                  lVar10 = *(int64_t *)(local_80 + 0x10);
                  uVar2 = *(uint64_t *)(lVar10 + 8 + lVar7 * 8);
                  local_90 = uVar2;
                  cVar5 = FUN_00d23d70();
                  if ((cVar5 == '\0') || (FUN_01a83c00(), uVar2 == 0)) goto LAB_01a7859e;
                  if (local_78._4_4_ != 0) {
                    if (local_78._4_4_ < 1) {
                      iVar11 = -local_78._4_4_;
                    }
                    else {
                      local_78 = CONCAT44(local_78._4_4_,(int)local_78 - local_78._4_4_);
                      FUN_00d23690();
                      local_70 = local_70 + local_78._4_4_;
                      iVar11 = 0;
                    }
                    local_78 = CONCAT44(iVar11,(int)local_78);
                  }
                }
              }
              FUN_01a81420();
              FUN_00d50b20();
            }
            if ((local_64 & 1) != 0) break;
            if (local_48._4_4_ != 0) {
              if (local_48._4_4_ < 1) {
                iVar11 = -local_48._4_4_;
              }
              else {
                local_48 = CONCAT44(local_48._4_4_,(int)local_48 - local_48._4_4_);
                FUN_00d23690();
                local_40 = local_40 + local_48._4_4_;
                iVar11 = 0;
              }
              local_48 = CONCAT44(iVar11,(int)local_48);
            }
          }
          FUN_01a80d20();
          FUN_00d50b20();
          plVar14 = local_38;
          if ((local_64 & 1) != 0) {
            local_58 = '\0';
            local_60 = plVar1;
            FUN_00ca13a0();
            if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
          }
        }
        if ((bVar3) && (plVar15 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if (plVar4 != (int64_t *)0x0) {
          FUN_00d50b20();
        }
        uVar13 = uVar13 + 1;
        local_100 = CONCAT44(local_100._4_4_,uVar13);
      } while ((int)uVar13 < *(int *)((int64_t)plVar14 + 0xc));
    }
    FUN_001159b0();
    FUN_00d50b20();
  }
  return;
}

