// Function: FUN_0137a290
// Address: 0137a290
// Size: 3162 bytes
// Class: GNString


/* WARNING: Removing unreachable block (ram,0x0137ad18) */
/* WARNING: Removing unreachable block (ram,0x0137a959) */
/* WARNING: Removing unreachable block (ram,0x0137a962) */
/* WARNING: Removing unreachable block (ram,0x0137a6ba) */
/* WARNING: Removing unreachable block (ram,0x0137a6c3) */
/* WARNING: Removing unreachable block (ram,0x0137a3aa) */
/* WARNING: Removing unreachable block (ram,0x0137a3b3) */
/* WARNING: Removing unreachable block (ram,0x0137a5de) */
/* WARNING: Removing unreachable block (ram,0x0137a5eb) */
/* WARNING: Removing unreachable block (ram,0x0137a840) */
/* WARNING: Removing unreachable block (ram,0x0137a84d) */
/* WARNING: Removing unreachable block (ram,0x0137ab2c) */
/* WARNING: Removing unreachable block (ram,0x0137ab3e) */
/* WARNING: Removing unreachable block (ram,0x0137ab4b) */
/* WARNING: Removing unreachable block (ram,0x0137aa70) */
/* WARNING: Removing unreachable block (ram,0x0137aa84) */
/* WARNING: Removing unreachable block (ram,0x0137aaa1) */
/* WARNING: Removing unreachable block (ram,0x0137aa91) */
/* WARNING: Removing unreachable block (ram,0x0137aaa4) */
/* WARNING: Removing unreachable block (ram,0x0137aac0) */
/* WARNING: Removing unreachable block (ram,0x0137aadd) */
/* WARNING: Removing unreachable block (ram,0x0137aacd) */
/* WARNING: Removing unreachable block (ram,0x0137aae0) */
/* WARNING: Removing unreachable block (ram,0x0137aaf2) */
/* WARNING: Removing unreachable block (ram,0x0137ab06) */
/* WARNING: Removing unreachable block (ram,0x0137ab55) */
/* WARNING: Removing unreachable block (ram,0x0137ab13) */
/* WARNING: Removing unreachable block (ram,0x0137ab58) */
/* WARNING: Removing unreachable block (ram,0x0137ab74) */
/* WARNING: Removing unreachable block (ram,0x0137ab91) */
/* WARNING: Removing unreachable block (ram,0x0137ab81) */
/* WARNING: Removing unreachable block (ram,0x0137ab94) */
/* WARNING: Removing unreachable block (ram,0x0137abaa) */
/* WARNING: Removing unreachable block (ram,0x0137abbe) */
/* WARNING: Removing unreachable block (ram,0x0137abdb) */
/* WARNING: Removing unreachable block (ram,0x0137abcb) */
/* WARNING: Removing unreachable block (ram,0x0137abde) */
/* WARNING: Removing unreachable block (ram,0x0137abff) */
/* WARNING: Removing unreachable block (ram,0x0137ac1c) */
/* WARNING: Removing unreachable block (ram,0x0137ac0c) */
/* WARNING: Removing unreachable block (ram,0x0137ac1f) */
/* WARNING: Removing unreachable block (ram,0x0137ac3f) */
/* WARNING: Removing unreachable block (ram,0x0137ac63) */
/* WARNING: Removing unreachable block (ram,0x0137ac4c) */
/* WARNING: Removing unreachable block (ram,0x0137ac6a) */
/* WARNING: Removing unreachable block (ram,0x0137ac86) */
/* WARNING: Removing unreachable block (ram,0x0137ac9b) */
/* WARNING: Removing unreachable block (ram,0x0137aca9) */
/* WARNING: Removing unreachable block (ram,0x0137ad13) */
/* WARNING: Removing unreachable block (ram,0x0137ad20) */
/* WARNING: Removing unreachable block (ram,0x0137acff) */
/* WARNING: Removing unreachable block (ram,0x0137ad2e) */
/* WARNING: Removing unreachable block (ram,0x0137ad43) */
/* WARNING: Removing unreachable block (ram,0x0137ad4b) */
/* WARNING: Removing unreachable block (ram,0x0137ad51) */
/* WARNING: Removing unreachable block (ram,0x0137ad5a) */
/* WARNING: Removing unreachable block (ram,0x0137ad5f) */
/* WARNING: Removing unreachable block (ram,0x0137ad68) */
/* WARNING: Removing unreachable block (ram,0x0137ad74) */
/* WARNING: Removing unreachable block (ram,0x0137ad80) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0137a290(void)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  char cVar5;
  undefined8 *puVar6;
  void *pvVar7;
  longlong lVar8;
  pthread_key_t pVar9;
  ulonglong uVar10;
  longlong *plVar11;
  ulonglong uVar12;
  longlong unaff_RDI;
  longlong lVar13;
  longlong lVar14;
  float fVar15;
  float fVar16;
  undefined4 uVar17;
  undefined8 local_c8;
  undefined1 local_c0;
  longlong local_88;
  char local_80;
  longlong local_78;
  char local_70;
  float local_50;
  longlong local_48;
  char local_40;
  float local_38;
  
  lVar1 = *(longlong *)(unaff_RDI + 0x40);
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  puVar6 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar6 = &DAT_025f0d98;
  puVar6[2] = 0;
  puVar6[3] = 0;
  puVar6[4] = 0;
  puVar6[5] = 0;
  puVar6[6] = 0;
  puVar6[7] = 0;
  (*DAT_025f0db0)();
  if (0 < *(int *)(lVar1 + 0xc)) {
    fVar16 = 0.0;
    lVar13 = 0;
    do {
      lVar14 = *(longlong *)(*(longlong *)(lVar1 + 0x10) + lVar13 * 8);
      lVar8 = lVar1;
      if (lVar14 != 0) {
        FUN_00d50b00();
      }
      pVar9 = (pthread_key_t)lVar8;
      pvVar7 = _pthread_getspecific(pVar9);
      if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
        pVar9 = (pthread_key_t)lVar14;
      }
      FUN_013de560();
      if ((local_40 == '\0') && (local_48 != 0)) {
        FUN_00d50b00();
      }
      pvVar7 = _pthread_getspecific(pVar9);
      if (pvVar7 != (void *)0x0) {
        FUN_00e8b990();
      }
      cVar5 = FUN_014cc8d0();
      if (cVar5 != '\0') {
        pvVar7 = _pthread_getspecific(pVar9);
        if (pvVar7 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_014cc890();
        pvVar7 = _pthread_getspecific(pVar9);
        if (pvVar7 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_018c3160();
        if (local_40 == '\0') {
          if (local_48 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_40 = '\0';
        }
        if ((local_70 != '\0') && (local_78 != 0)) {
          FUN_00d50b20();
        }
        if (0 < *(int *)(local_48 + 0xc)) {
          lVar8 = 0;
          do {
            lVar2 = *(longlong *)(*(longlong *)(local_48 + 0x10) + lVar8 * 8);
            if (lVar2 != 0) {
              FUN_00d50b00();
            }
            if (3 < (int)*(uint *)(lVar2 + 0x18)) {
              uVar4 = *(uint *)(lVar2 + 0x18) >> 2;
              lVar3 = *(longlong *)(lVar2 + 0x10);
              if ((ulonglong)uVar4 - 1 < 3) {
                uVar12 = 0;
              }
              else {
                uVar12 = 0;
                do {
                  fVar15 = *(float *)(lVar3 + uVar12 * 4);
                  if (fVar15 <= fVar16) {
                    fVar15 = fVar16;
                  }
                  fVar16 = *(float *)(lVar3 + 4 + uVar12 * 4);
                  if (fVar16 <= fVar15) {
                    fVar16 = fVar15;
                  }
                  fVar15 = *(float *)(lVar3 + 8 + uVar12 * 4);
                  if (fVar15 <= fVar16) {
                    fVar15 = fVar16;
                  }
                  fVar16 = *(float *)(lVar3 + 0xc + uVar12 * 4);
                  if (fVar16 <= fVar15) {
                    fVar16 = fVar15;
                  }
                  uVar12 = uVar12 + 4;
                } while ((uVar4 & 0xfffffffc) != uVar12);
              }
              if ((ulonglong)(uVar4 & 3) != 0) {
                uVar10 = 0;
                do {
                  fVar15 = *(float *)(lVar3 + uVar12 * 4 + uVar10 * 4);
                  if (fVar15 <= fVar16) {
                    fVar15 = fVar16;
                  }
                  fVar16 = fVar15;
                  uVar10 = uVar10 + 1;
                } while ((uVar4 & 3) != uVar10);
              }
            }
            if (lVar2 != 0) {
              FUN_00d50b20();
            }
            lVar8 = lVar8 + 1;
          } while (lVar8 < *(int *)(local_48 + 0xc));
        }
        FUN_00d50b20();
      }
      if (local_48 != 0) {
        FUN_00d50b20();
      }
      if (lVar14 != 0) {
        FUN_00d50b20();
      }
      lVar13 = lVar13 + 1;
    } while (lVar13 < *(int *)(lVar1 + 0xc));
    if ((DAT_02394274 <= fVar16) && (0 < *(int *)(lVar1 + 0xc))) {
      fVar16 = DAT_02390124 / fVar16;
      lVar13 = 0;
      do {
        lVar14 = *(longlong *)(*(longlong *)(lVar1 + 0x10) + lVar13 * 8);
        lVar8 = lVar1;
        if (lVar14 != 0) {
          FUN_00d50b00();
        }
        pVar9 = (pthread_key_t)lVar8;
        pvVar7 = _pthread_getspecific(pVar9);
        if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
          pVar9 = (pthread_key_t)lVar14;
        }
        FUN_013de560();
        if ((local_40 == '\0') && (local_48 != 0)) {
          FUN_00d50b00();
        }
        pvVar7 = _pthread_getspecific(pVar9);
        if (pvVar7 != (void *)0x0) {
          FUN_00e8b990();
        }
        cVar5 = FUN_014cc8d0();
        if (cVar5 != '\0') {
          pvVar7 = _pthread_getspecific(pVar9);
          if (pvVar7 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_014cc890();
          pvVar7 = _pthread_getspecific(pVar9);
          if (pvVar7 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_018c3160();
          if (local_40 == '\0') {
            if (local_48 != 0) {
              FUN_00d50b00();
            }
          }
          else {
            local_40 = '\0';
          }
          if ((local_70 != '\0') && (local_78 != 0)) {
            FUN_00d50b20();
          }
          if (0 < *(int *)(local_48 + 0xc)) {
            lVar8 = 0;
            do {
              (**(code **)(DAT_02786500 + 0x20))(fVar16);
              lVar8 = lVar8 + 1;
            } while (lVar8 < *(int *)(local_48 + 0xc));
          }
          FUN_00d50b20();
        }
        if (local_48 != 0) {
          FUN_00d50b20();
        }
        if (lVar14 != 0) {
          FUN_00d50b20();
        }
        lVar13 = lVar13 + 1;
      } while (lVar13 < *(int *)(lVar1 + 0xc));
    }
  }
  plVar11 = *(longlong **)(unaff_RDI + 0x38);
  pvVar7 = _pthread_getspecific((pthread_key_t)lVar1);
  if (pvVar7 != (void *)0x0) {
    plVar11 = *(longlong **)(unaff_RDI + 0x38);
    lVar13 = FUN_00e8b990();
    if (lVar13 != 0) {
      plVar11 = (longlong *)plVar11[(ulonglong)(*(uint *)(lVar13 + 0x154) & 1) + 4];
    }
  }
  (**(code **)(*plVar11 + 0x370))();
  if (0 < *(int *)(lVar1 + 0xc)) {
    lVar13 = 0;
    do {
      lVar14 = *(longlong *)(*(longlong *)(lVar1 + 0x10) + lVar13 * 8);
      lVar8 = lVar1;
      if (lVar14 != 0) {
        FUN_00d50b00();
      }
      pVar9 = (pthread_key_t)lVar8;
      pvVar7 = _pthread_getspecific(pVar9);
      if (pvVar7 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_013de560();
      if ((local_40 == '\0') && (local_48 != 0)) {
        FUN_00d50b00();
      }
      pvVar7 = _pthread_getspecific(pVar9);
      if (pvVar7 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_014bc420();
      if ((local_40 != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
      if (local_48 == 0) {
        pvVar7 = _pthread_getspecific(pVar9);
        if (pvVar7 != (void *)0x0) {
          FUN_00e8b990();
        }
        local_80 = 0;
        lVar8 = *(longlong *)(unaff_RDI + 200);
        if (lVar8 != 0) {
          FUN_00d50b00();
        }
        local_80 = '\x01';
        local_88 = lVar8;
        FUN_014d39b0(DAT_02394240,&local_88);
        if (local_40 != '\0') {
          local_40 = '\0';
        }
        if ((local_80 != '\0') && (local_88 != 0)) {
          FUN_00d50b20();
        }
      }
      if (local_48 != 0) {
        FUN_00d50b20();
      }
      if (lVar14 != 0) {
        FUN_00d50b20();
      }
      lVar13 = lVar13 + 1;
    } while (lVar13 < *(int *)(lVar1 + 0xc));
  }
  lVar13 = *(longlong *)(unaff_RDI + 200);
  fVar16 = DAT_0240d3a8;
  fVar15 = DAT_0240d3ac;
  if (0 < *(int *)(lVar13 + 0xc)) {
    local_50 = DAT_0240e358;
    local_38 = DAT_0240d3b0;
    lVar14 = 0;
    do {
      plVar11 = *(longlong **)(*(longlong *)(lVar13 + 0x10) + lVar14 * 8);
      pvVar7 = _pthread_getspecific((pthread_key_t)lVar13);
      if ((pvVar7 != (void *)0x0) && (lVar13 = FUN_00e8b990(), lVar13 != 0)) {
        plVar11 = (longlong *)plVar11[(ulonglong)(*(uint *)(lVar13 + 0x154) & 1) + 4];
      }
      fVar16 = (float)(**(code **)(*plVar11 + 0x3e0))();
      fVar15 = fVar16;
      if (local_50 <= fVar16) {
        fVar15 = local_50;
      }
      if (fVar16 <= local_38) {
        fVar16 = local_38;
      }
      lVar14 = lVar14 + 1;
      lVar13 = *(longlong *)(unaff_RDI + 200);
      local_38 = fVar16;
      local_50 = fVar15;
    } while (lVar14 < *(int *)(lVar13 + 0xc));
    fVar16 = fVar16 + DAT_0239394c;
    fVar15 = fVar15 + DAT_02394218;
  }
  FUN_00d64850();
  *(float *)(unaff_RDI + 0x70) = fVar15;
  FUN_00d64910();
  FUN_00d64850();
  *(float *)(unaff_RDI + 0x74) = fVar16;
  FUN_00d64910();
  uVar17 = FUN_0137b4c0();
  local_c8 = 0;
  local_c0 = 0;
  FUN_013469e0(uVar17,&local_c8);
  if (puVar6 != (undefined8 *)0x0) {
    FUN_00d50b20();
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  return;
}


