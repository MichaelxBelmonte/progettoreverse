// Function: FUN_01acce90
// Address: 01acce90
// Size: 2934 bytes
// Class: MUScalePanel


/* WARNING: Removing unreachable block (ram,0x01acd5a8) */
/* WARNING: Removing unreachable block (ram,0x01acd5b1) */
/* WARNING: Removing unreachable block (ram,0x01acd1a7) */
/* WARNING: Removing unreachable block (ram,0x01acd1b0) */
/* WARNING: Removing unreachable block (ram,0x01accfb1) */
/* WARNING: Removing unreachable block (ram,0x01accfbd) */
/* WARNING: Removing unreachable block (ram,0x01acda32) */
/* WARNING: Removing unreachable block (ram,0x01acda42) */
/* WARNING: Removing unreachable block (ram,0x01acd300) */
/* WARNING: Removing unreachable block (ram,0x01acd309) */
/* WARNING: Removing unreachable block (ram,0x01acd290) */
/* WARNING: Removing unreachable block (ram,0x01acd299) */
/* WARNING: Removing unreachable block (ram,0x01acd0df) */
/* WARNING: Removing unreachable block (ram,0x01acd100) */
/* WARNING: Removing unreachable block (ram,0x01acd0e1) */
/* WARNING: Removing unreachable block (ram,0x01acd102) */
/* WARNING: Removing unreachable block (ram,0x01acd448) */
/* WARNING: Removing unreachable block (ram,0x01acd451) */
/* WARNING: Removing unreachable block (ram,0x01acd835) */
/* WARNING: Removing unreachable block (ram,0x01acd842) */

void FUN_01acce90(undefined8 param_1,char param_2)

{
  pthread_key_t pVar1;
  longlong lVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  longlong lVar6;
  ulonglong uVar7;
  char cVar8;
  void *pvVar9;
  longlong lVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  pthread_key_t pVar13;
  pthread_key_t pVar14;
  longlong lVar15;
  ulonglong unaff_RSI;
  longlong *unaff_RDI;
  ulonglong uVar16;
  ulonglong uVar17;
  longlong local_a0;
  char local_98;
  int local_88;
  undefined8 local_60;
  char local_58;
  undefined8 local_40;
  char local_38;
  
  if ((unaff_RSI >> 0x20 != 0) && (lVar2 = *unaff_RDI, lVar2 != 0)) {
    if (0 < *(int *)(lVar2 + 0xc)) {
      pVar13 = 0;
      do {
        lVar6 = local_a0;
        pVar14 = pVar13;
        pvVar9 = _pthread_getspecific(pVar13);
        if (pvVar9 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0125e7c0();
        if ((local_98 == '\0') && (local_a0 != 0)) {
          FUN_00d50b00();
        }
        pvVar9 = _pthread_getspecific(pVar14);
        if ((pvVar9 != (void *)0x0) && (lVar10 = FUN_00e8b990(), lVar10 != 0)) {
          pVar14 = (pthread_key_t)local_a0;
        }
        FUN_013dfcb0();
        pvVar9 = _pthread_getspecific(pVar14);
        if (pvVar9 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_013dd790();
        if (local_98 == '\0') {
          if (local_a0 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_98 = '\0';
        }
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
        if (local_a0 != 0) {
          local_98 = '\0';
          local_a0 = 0;
          local_88 = -1;
LAB_01acd0db:
          while( true ) {
            uVar7 = local_40;
            lVar10 = (longlong)local_88;
            local_88 = local_88 + 1;
            if (*(int *)(lVar6 + 0xc) <= local_88) break;
            lVar15 = *(longlong *)(lVar6 + 0x10);
            local_a0 = *(longlong *)(lVar15 + 8 + lVar10 * 8);
            pvVar9 = _pthread_getspecific((pthread_key_t)lVar15);
            pVar14 = (pthread_key_t)lVar15;
            if (pvVar9 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_011ef8d0();
            if (local_38 == '\0') goto LAB_01acd190;
            if (local_40 != 0) goto LAB_01acd1c0;
          }
          FUN_0015edf0();
          FUN_00d50b20();
        }
        if (lVar6 != 0) {
          FUN_00d50b20();
        }
        pVar13 = pVar13 + 1;
      } while ((int)pVar13 < *(int *)(lVar2 + 0xc));
    }
    FUN_001159b0();
  }
  return;
LAB_01acd190:
  if (local_40 == 0) goto LAB_01acd0db;
  FUN_00d50b00();
LAB_01acd1c0:
  pvVar9 = _pthread_getspecific(pVar14);
  if (pvVar9 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0125e930();
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if (local_40 == 0) goto LAB_01acd0d0;
  pvVar9 = _pthread_getspecific(pVar14);
  if (pvVar9 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012640f0();
  if ((local_38 == '\0') && (local_40 != 0)) {
    FUN_00d50b00();
  }
  pvVar9 = _pthread_getspecific(pVar14);
  if (pvVar9 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012641c0();
  if ((local_38 == '\0') && (local_40 != 0)) {
    FUN_00d50b00();
  }
  pVar1 = (pthread_key_t)local_40;
  if (local_40 == 0) {
LAB_01acd3b0:
    uVar16 = 0;
    bVar5 = false;
  }
  else {
    pvVar9 = _pthread_getspecific(pVar14);
    if ((pvVar9 != (void *)0x0) && (lVar10 = FUN_00e8b990(), lVar10 != 0)) {
      pVar14 = pVar1;
    }
    FUN_0125e930();
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if (local_40 == 0) goto LAB_01acd3b0;
    pvVar9 = _pthread_getspecific(pVar14);
    if ((pvVar9 != (void *)0x0) && (lVar10 = FUN_00e8b990(), lVar10 != 0)) {
      pVar14 = pVar1;
    }
    FUN_0125e930();
    pvVar9 = _pthread_getspecific(pVar14);
    if (pvVar9 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0152ebe0();
    if (local_40 == 0) {
      bVar5 = false;
      uVar16 = 0;
    }
    else {
      uVar16 = local_40;
      if (local_38 == '\0') {
        FUN_00d50b00();
        bVar5 = true;
      }
      else {
        local_38 = '\0';
        bVar5 = true;
      }
    }
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
  }
  if (local_40 == 0) {
LAB_01acd510:
    uVar17 = 0;
    bVar4 = false;
  }
  else {
    pvVar9 = _pthread_getspecific(pVar14);
    if ((pvVar9 != (void *)0x0) && (lVar10 = FUN_00e8b990(), lVar10 != 0)) {
      pVar14 = pVar1;
    }
    FUN_0125e930();
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if (local_40 == 0) goto LAB_01acd510;
    pvVar9 = _pthread_getspecific(pVar14);
    if ((pvVar9 != (void *)0x0) && (lVar10 = FUN_00e8b990(), lVar10 != 0)) {
      pVar14 = pVar1;
    }
    FUN_0125e930();
    pvVar9 = _pthread_getspecific(pVar14);
    if (pvVar9 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0152ebe0();
    if (local_40 == 0) {
      bVar4 = false;
      uVar17 = 0;
    }
    else {
      uVar17 = local_40;
      if (local_38 == '\0') {
        FUN_00d50b00();
        bVar4 = true;
      }
      else {
        local_38 = '\0';
        bVar4 = true;
      }
    }
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
  }
  pvVar9 = _pthread_getspecific(pVar14);
  if (pvVar9 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0125e930();
  pvVar9 = _pthread_getspecific(pVar14);
  if (pvVar9 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0152ebe0();
  if (local_38 == '\0') {
    if (local_40 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  pvVar9 = _pthread_getspecific(pVar14);
  if (pvVar9 != (void *)0x0) {
    FUN_00e8b990();
  }
  lVar10 = FUN_01508610();
  FUN_00e7b820();
  pvVar9 = _pthread_getspecific(pVar14);
  if (pvVar9 != (void *)0x0) {
    FUN_00e8b990();
  }
  uVar11 = FUN_01507970();
  local_60._4_4_ = (int)((ulonglong)lVar10 >> 0x20);
  if (param_2 == '\0') {
    bVar3 = false;
    if ((local_60._4_4_ != 0) && (uVar11 >> 0x20 != 0)) {
      cVar8 = FUN_00e7c020();
      if (cVar8 == '\0') goto LAB_01acd735;
      bVar3 = false;
    }
  }
  else {
LAB_01acd735:
    bVar3 = true;
    FUN_00e7b820();
  }
  if (uVar16 == 0) {
LAB_01acd7e0:
    if (uVar17 != 0) {
      pvVar9 = _pthread_getspecific(pVar14);
      if (pvVar9 != (void *)0x0) {
        FUN_00e8b990();
      }
      uVar12 = FUN_01508610();
      if (((local_60._4_4_ != 0) && (uVar12 >> 0x20 != 0)) &&
         (cVar8 = FUN_00e7c020(), cVar8 == '\0')) goto LAB_01acd982;
    }
    pvVar9 = _pthread_getspecific(pVar14);
    if (pvVar9 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_015085a0();
    if (uVar17 != 0) {
      pvVar9 = _pthread_getspecific(pVar14);
      if (pvVar9 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_015084d0();
    }
    if (bVar3) {
      pvVar9 = _pthread_getspecific(pVar14);
      if (pvVar9 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_015084d0();
      if (uVar16 != 0) {
        pvVar9 = _pthread_getspecific(pVar14);
        if (pvVar9 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_015085a0();
      }
    }
  }
  else {
    pvVar9 = _pthread_getspecific(pVar14);
    if (pvVar9 != (void *)0x0) {
      FUN_00e8b990();
    }
    uVar12 = FUN_01507970();
    local_40._4_4_ = (int)(uVar11 >> 0x20);
    if (((local_40._4_4_ == 0) || (uVar12 >> 0x20 == 0)) || (cVar8 = FUN_00e7c020(), cVar8 != '\0'))
    goto LAB_01acd7e0;
  }
LAB_01acd982:
  if (uVar7 != 0) {
    FUN_00d50b20();
  }
  if ((bVar4) && (uVar17 != 0)) {
    FUN_00d50b20();
  }
  if ((bVar5) && (uVar16 != 0)) {
    FUN_00d50b20();
  }
  local_60 = lVar10;
  local_40 = uVar11;
  if (uVar7 != 0) {
    FUN_00d50b20();
    FUN_00d50b20();
  }
LAB_01acd0d0:
  FUN_00d50b20();
  goto LAB_01acd0db;
}


