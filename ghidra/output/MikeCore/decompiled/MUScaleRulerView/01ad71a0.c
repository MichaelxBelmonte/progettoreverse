// Function: FUN_01ad71a0
// Address: 01ad71a0
// Size: 3181 bytes
// Class: MUScaleRulerView


/* WARNING: Removing unreachable block (ram,0x01ad75e7) */
/* WARNING: Removing unreachable block (ram,0x01ad75f3) */
/* WARNING: Removing unreachable block (ram,0x01ad7700) */
/* WARNING: Removing unreachable block (ram,0x01ad770c) */
/* WARNING: Removing unreachable block (ram,0x01ad7e2d) */
/* WARNING: Removing unreachable block (ram,0x01ad7e3a) */
/* WARNING: Removing unreachable block (ram,0x01ad72bc) */
/* WARNING: Removing unreachable block (ram,0x01ad72c5) */
/* WARNING: Removing unreachable block (ram,0x01ad74d2) */
/* WARNING: Removing unreachable block (ram,0x01ad74db) */
/* WARNING: Removing unreachable block (ram,0x01ad7800) */
/* WARNING: Removing unreachable block (ram,0x01ad7809) */
/* WARNING: Removing unreachable block (ram,0x01ad79ca) */
/* WARNING: Removing unreachable block (ram,0x01ad79cf) */

void FUN_01ad71a0(void)

{
  char cVar1;
  longlong lVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  undefined8 uVar7;
  void *pvVar8;
  longlong lVar9;
  pthread_key_t pVar10;
  longlong *plVar11;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  longlong lVar12;
  undefined4 uVar13;
  undefined4 extraout_XMM0_Da;
  float fVar14;
  longlong local_160;
  char local_158;
  longlong local_150;
  char local_148;
  longlong local_140;
  char local_138;
  longlong local_130;
  char local_128;
  longlong local_120;
  char local_118;
  longlong local_110;
  char local_108;
  longlong *local_100;
  char local_f8;
  longlong *local_f0;
  char local_e8;
  undefined4 local_e0;
  undefined4 local_dc;
  longlong *local_d8;
  longlong local_d0;
  longlong *local_c8;
  char local_c0;
  int local_b8;
  undefined4 uStack_b4;
  char local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_90;
  int local_88;
  float local_84;
  char local_70;
  longlong *local_60;
  longlong *local_58;
  longlong *local_48;
  longlong *local_40;
  char local_38;
  
  FUN_01ad3cb0();
  if (local_38 == '\0') {
    if (local_40 == (longlong *)0x0) {
      return;
    }
    FUN_00d50b00();
  }
  else if (local_40 == (longlong *)0x0) {
    return;
  }
  FUN_01a1d6e0();
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (local_40 == (longlong *)0x0) {
    local_58 = (longlong *)0x0;
    bVar5 = false;
    local_40 = (longlong *)0x0;
    local_a0 = 0;
    local_90 = 0;
    local_48 = (longlong *)0x0;
    local_70 = '\0';
    goto LAB_01ad7437;
  }
  FUN_01a1d6e0();
  uVar7 = (**(code **)(*(longlong *)CONCAT44(uStack_b4,local_b8) + 0xe70))();
  if (local_40 == (longlong *)0x0) {
    bVar3 = true;
    local_a0 = 0;
  }
  else if (local_38 == '\0') {
    uVar7 = FUN_00d50b00();
    bVar3 = false;
    local_a0 = CONCAT71((int7)((ulonglong)uVar7 >> 8),1);
  }
  else {
    local_a0 = CONCAT71((int7)((ulonglong)uVar7 >> 8),1);
    local_38 = '\0';
    bVar3 = false;
  }
  uVar7 = local_a0;
  if ((local_b0 != '\0') && (CONCAT44(uStack_b4,local_b8) != 0)) {
    uVar7 = FUN_00d50b20();
  }
  if (local_40 == (longlong *)0x0 || bVar3) {
    local_90 = 0;
  }
  else {
    local_90 = CONCAT71((int7)((ulonglong)uVar7 >> 8),1);
    FUN_00d50b00();
  }
  FUN_01a1d6e0();
  iVar6 = (**(code **)(*local_40 + 0xd20))();
  if (iVar6 == 0) {
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
LAB_01ad73d0:
    local_70 = '\0';
    local_48 = (longlong *)0x0;
    bVar5 = false;
    local_58 = (longlong *)0x0;
  }
  else {
    cVar1 = *(char *)(unaff_RDI + 0x1da);
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (cVar1 != '\0') goto LAB_01ad73d0;
    FUN_01a1d6e0();
    (**(code **)(*(longlong *)CONCAT44(uStack_b4,local_b8) + 0xe30))();
    local_58 = local_40;
    plVar11 = local_40;
    if (local_40 == (longlong *)0x0) {
      bVar4 = true;
      local_58 = (longlong *)0x0;
      bVar5 = false;
    }
    else if (local_38 == '\0') {
      FUN_00d50b00();
      bVar4 = false;
      bVar5 = true;
    }
    else {
      local_38 = '\0';
      bVar5 = true;
      bVar4 = false;
    }
    pVar10 = (pthread_key_t)plVar11;
    if ((local_b0 != '\0') && (CONCAT44(uStack_b4,local_b8) != 0)) {
      FUN_00d50b20();
    }
    if ((local_58 == (longlong *)0x0) || (*(int *)((longlong)local_58 + 0xc) == 0)) {
      if (local_40 == (longlong *)0x0) {
        local_70 = '\0';
        local_48 = (longlong *)0x0;
      }
      else {
        if (!bVar3) {
          FUN_00d50b00();
        }
        local_70 = (char)local_a0;
        local_48 = local_40;
      }
    }
    else if (bVar4) {
      local_70 = '\0';
      local_48 = local_58;
    }
    else {
      FUN_00d50b00();
      local_70 = '\x01';
      local_48 = local_58;
    }
    uVar13 = FUN_01a1d6e0();
    local_c0 = 0;
    if (local_38 == '\0') {
      if (local_40 != (longlong *)0x0) {
        uVar13 = FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    local_c0 = '\x01';
    local_c8 = local_40;
    FUN_01a296f0(uVar13,0);
    if ((local_c0 != '\0') && (local_c8 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    local_d0 = *(longlong *)(unaff_RDI + 0x2a0);
    if (((local_d0 != 0) && (local_48 != (longlong *)0x0)) &&
       (*(int *)((longlong)local_48 + 0xc) != 0)) {
      FUN_00d50b00();
      pvVar8 = _pthread_getspecific(pVar10);
      if (pvVar8 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_017402f0();
      if (local_38 == '\0') {
        if (local_40 != (longlong *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      local_d8 = local_40;
      FUN_01a1d6e0();
      local_dc = (**(code **)(*local_40 + 0xd20))();
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (0 < *(int *)((longlong)local_48 + 0xc)) {
        lVar12 = 0;
        do {
          local_88 = 0;
          lVar2 = *(longlong *)(local_48[2] + lVar12 * 8);
          plVar11 = local_48;
          if (lVar2 != 0) {
            FUN_00d50b00();
          }
          pVar10 = (pthread_key_t)plVar11;
          pvVar8 = _pthread_getspecific(pVar10);
          if (pvVar8 != (void *)0x0) {
            FUN_00e8b990();
          }
          uVar13 = FUN_0125e930();
          if ((local_38 == '\0') && (local_40 != (longlong *)0x0)) {
            uVar13 = FUN_00d50b00();
          }
          bVar3 = true;
          if (*unaff_RSI == 0) {
LAB_01ad78e0:
            local_a8 = 0;
LAB_01ad78f2:
            pvVar8 = _pthread_getspecific(pVar10);
            if (pvVar8 != (void *)0x0) {
              FUN_00e8b990();
            }
            fVar14 = (float)FUN_0125a2c0();
            bVar4 = true;
            local_84 = fVar14;
            if (!bVar3) goto LAB_01ad7ae1;
            if (local_40 != (longlong *)0x0) {
              bVar4 = true;
              pvVar8 = _pthread_getspecific(pVar10);
              if ((pvVar8 != (void *)0x0) && (lVar9 = FUN_00e8b990(), lVar9 != 0)) {
                pVar10 = (pthread_key_t)local_40;
              }
              local_88 = FUN_0152e220();
            }
          }
          else {
            local_158 = '\0';
            local_160 = lVar2;
            uVar13 = FUN_007a2fc0(uVar13,&local_160);
            if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
              uVar13 = FUN_00d50b20();
            }
            if ((local_158 != '\0') && (local_160 != 0)) {
              uVar13 = FUN_00d50b20();
            }
            if (local_40 == (longlong *)0x0) goto LAB_01ad78e0;
            local_148 = '\0';
            local_150 = lVar2;
            uVar13 = FUN_007a2fc0(uVar13,&local_150);
            local_60 = local_40;
            plVar11 = local_40;
            if (local_40 == (longlong *)0x0) {
              local_a8 = 0;
              local_60 = (longlong *)0x0;
            }
            else if (local_38 == '\0') {
              uVar7 = FUN_00d50b00();
              local_a8 = CONCAT71((int7)((ulonglong)uVar7 >> 8),1);
              uVar13 = extraout_XMM0_Da;
            }
            else {
              local_38 = '\0';
              local_a8 = CONCAT71((int7)((ulonglong)local_40 >> 8),1);
            }
            pVar10 = (pthread_key_t)plVar11;
            if ((local_148 != '\0') && (local_150 != 0)) {
              uVar13 = FUN_00d50b20();
            }
            lVar9 = DAT_027e3ba0;
            if (local_60 == (longlong *)0x0) goto LAB_01ad78f2;
            if (DAT_027e3ba0 != 0) {
              uVar13 = FUN_00d50b00();
            }
            local_140 = lVar9;
            local_138 = '\x01';
            uVar13 = FUN_000175c0(uVar13,&local_140);
            if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
              uVar13 = FUN_00d50b20();
            }
            if ((local_138 != '\0') && (local_140 != 0)) {
              uVar13 = FUN_00d50b20();
            }
            lVar9 = DAT_027e3ba0;
            if (local_40 == (longlong *)0x0) {
              bVar3 = false;
              goto LAB_01ad78f2;
            }
            if (DAT_027e3ba0 != 0) {
              uVar13 = FUN_00d50b00();
            }
            local_130 = lVar9;
            local_128 = '\x01';
            FUN_000175c0(uVar13,&local_130);
            fVar14 = (float)FUN_00d459e0();
            local_84 = fVar14;
            if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
              fVar14 = (float)FUN_00d50b20();
            }
            if ((local_128 != '\0') && (local_130 != 0)) {
              fVar14 = (float)FUN_00d50b20();
            }
LAB_01ad7ae1:
            lVar9 = DAT_027e3bb8;
            if (DAT_027e3bb8 != 0) {
              fVar14 = (float)FUN_00d50b00();
            }
            local_120 = lVar9;
            local_118 = '\x01';
            uVar13 = FUN_000175c0(fVar14,&local_120);
            if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
              uVar13 = FUN_00d50b20();
            }
            if ((local_118 != '\0') && (local_120 != 0)) {
              uVar13 = FUN_00d50b20();
            }
            lVar9 = DAT_027e3bb8;
            if (local_40 == (longlong *)0x0) {
              bVar4 = false;
            }
            else {
              if (DAT_027e3bb8 != 0) {
                uVar13 = FUN_00d50b00();
              }
              local_110 = lVar9;
              local_108 = '\x01';
              FUN_000175c0(uVar13,&local_110);
              local_88 = FUN_00d45870();
              if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
              if ((local_108 != '\0') && (local_110 != 0)) {
                FUN_00d50b20();
              }
              bVar4 = false;
            }
          }
          pvVar8 = _pthread_getspecific(pVar10);
          if (pvVar8 != (void *)0x0) {
            FUN_00e8b990();
          }
          local_e0 = FUN_0173fd40(local_84);
          iVar6 = local_88;
          local_b8 = local_b8 - local_88;
          pvVar8 = _pthread_getspecific(pVar10);
          if (pvVar8 != (void *)0x0) {
            FUN_00e8b990();
          }
          local_100 = local_d8;
          local_f8 = '\0';
          pVar10 = 0;
          local_84 = (float)FUN_0173fdf0(local_84 - (float)(iVar6 * 100),local_e0,DAT_02390d00,
                                         local_b8);
          if ((local_f8 != '\0') && (local_100 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if (local_40 != (longlong *)0x0) {
            pvVar8 = _pthread_getspecific(pVar10);
            if ((pvVar8 != (void *)0x0) && (lVar9 = FUN_00e8b990(), lVar9 != 0)) {
              pVar10 = (pthread_key_t)local_40;
            }
            FUN_0152df60();
          }
          pvVar8 = _pthread_getspecific(pVar10);
          if (pvVar8 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0125a580(local_84);
          if (local_40 != (longlong *)0x0) {
            FUN_00d50b20();
          }
          if ((char)local_a8 != '\0' && !bVar4) {
            FUN_00d50b20();
          }
          if (lVar2 != 0) {
            FUN_00d50b20();
          }
          lVar12 = lVar12 + 1;
        } while (lVar12 < *(int *)((longlong)local_48 + 0xc));
      }
      if (local_d8 != (longlong *)0x0) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
    }
  }
  local_f0 = local_40;
  local_e8 = '\0';
  FUN_012879b0();
  if ((local_e8 != '\0') && (local_f0 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (*(char *)(unaff_RDI + 0x1da) == '\0') {
    *(undefined1 *)(unaff_RDI + 0x1d8) = 0;
  }
  *(undefined1 *)(unaff_RDI + 0x1da) = 0;
LAB_01ad7437:
  FUN_00d50b20();
  if ((local_70 != '\0') && (local_48 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (((char)local_90 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (((char)local_a0 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((bVar5) && (local_58 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  return;
}


