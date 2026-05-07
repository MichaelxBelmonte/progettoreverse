// Function: FUN_004b2fa0
// Address: 004b2fa0
// Size: 1893 bytes
// Class: MDAudioTrackItem
// String references:
//   "MDAudioTrackItem"
// === MDAudioTrackItem properties ===
//   MDAudioTrackItemType _trackItemType


void FUN_004b2fa0(void)

{
  int64_t lVar1;
  int64_t *plVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int64_t *arg1;
  int64_t *this_ptr;
  int64_t *plVar7;
  uint32_t uVar8;
  uint32_t uVar9;
  uint32_t extraout_XMM0_Da;
  uint32_t uVar10;
  uint32_t extraout_XMM0_Da_00;
  uint32_t extraout_XMM0_Dc;
  uint32_t uVar11;
  uint64_t in_XMM3_Qa;
  int64_t local_c8;
  char local_c0;
  int64_t *local_40;
  char local_38;
  
  iVar4 = FUN_01d3a5a0();
  if ((iVar4 != 1) || (iVar4 = FUN_01d3b630(), iVar4 != 1)) {
    FUN_01be6360();
    return;
  }
  uVar5 = FUN_01d3b590();
  uVar6 = FUN_01d3b590();
  FUN_01be4ec0();
  if ((local_38 == '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b00();
  }
  cVar3 = FUN_01e420b0();
  if (cVar3 == '\0') {
    FUN_01e42250();
    cVar3 = FUN_01e42170();
    if (cVar3 == '\0') {
      FUN_01e42030();
      FUN_01d8cd90();
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
  }
  iVar4 = FUN_01d3b620();
  if (iVar4 != 2) {
    uVar8 = FUN_01d3abf0();
    uVar11 = 0;
    uVar9 = FUN_00d05530(uVar8,0,g_023908d8);
    uVar8 = uVar9;
LAB_004b32c0:
    do {
      do {
        do {
          (**(code **)(*this_ptr + 0x658))(uVar8);
          plVar2 = (int64_t *)*arg1;
          if (plVar2 == local_40) {
            if (((char)arg1[1] != '\0') || (local_40 == (int64_t *)0x0)) goto LAB_004b3372;
            plVar7 = plVar2;
            if (local_38 == '\0') {
              FUN_00d50b00();
              goto LAB_004b336d;
            }
LAB_004b3325:
            *(void*)(arg1 + 1) = 1;
          }
          else {
            lVar1 = arg1[1];
            if (local_38 != '\0') {
              *arg1 = (int64_t)local_40;
              plVar7 = local_40;
              if (((char)lVar1 != '\0') && (plVar2 != (int64_t *)0x0)) {
                FUN_00d50b20();
                plVar7 = (int64_t *)*arg1;
              }
              goto LAB_004b3325;
            }
            if (local_40 != (int64_t *)0x0) {
              FUN_00d50b00();
            }
            *arg1 = (int64_t)local_40;
            if (((char)lVar1 != '\0') && (plVar2 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
LAB_004b336d:
            *(void*)(arg1 + 1) = 1;
LAB_004b3372:
            plVar7 = (int64_t *)*arg1;
            if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
          }
          if (plVar7 == (int64_t *)0x0) goto LAB_004b357d;
          iVar4 = FUN_01d3a5a0();
          if (iVar4 == 6) {
            FUN_01bc08b0();
            FUN_01be4ec0();
            lVar1 = this_ptr[0x27];
            if (lVar1 != 0) {
              FUN_00d50b00();
            }
            FUN_01bef350((uVar6 & 2) >> 1,(uVar5 & 4) >> 2,0);
            if (lVar1 != 0) {
              FUN_00d50b20();
            }
            if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            goto LAB_004b357d;
          }
          iVar4 = FUN_01d3a5a0();
          uVar8 = extraout_XMM0_Da;
        } while (iVar4 != 5);
        uVar8 = FUN_01d3abf0();
        cVar3 = FUN_00d05410(uVar8,uVar9,uVar11,in_XMM3_Qa,uVar8,extraout_XMM0_Dc);
      } while (cVar3 != '\0');
      uVar10 = FUN_01e466c0();
      uVar8 = (**(code **)(*this_ptr + 0x658))();
      plVar2 = (int64_t *)*arg1;
      if (plVar2 == local_40) {
        if (((char)arg1[1] == '\0') && (local_40 != (int64_t *)0x0)) {
          if (local_38 == '\0') {
            uVar8 = FUN_00d50b00();
            goto LAB_004b34c2;
          }
          goto LAB_004b3458;
        }
LAB_004b3461:
        lVar1 = *arg1;
      }
      else {
        lVar1 = arg1[1];
        if (local_38 != '\0') {
          *arg1 = (int64_t)local_40;
          if (((char)lVar1 != '\0') && (plVar2 != (int64_t *)0x0)) {
            uVar8 = FUN_00d50b20();
          }
LAB_004b3458:
          *(void*)(arg1 + 1) = 1;
          local_38 = '\0';
          goto LAB_004b3461;
        }
        if (local_40 != (int64_t *)0x0) {
          uVar8 = FUN_00d50b00();
        }
        *arg1 = (int64_t)local_40;
        if (((char)lVar1 != '\0') && (plVar2 != (int64_t *)0x0)) {
          uVar8 = FUN_00d50b20();
        }
LAB_004b34c2:
        *(void*)(arg1 + 1) = 1;
        lVar1 = *arg1;
      }
      if (lVar1 == 0) {
        if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
          uVar8 = FUN_00d50b20();
        }
        goto LAB_004b32c0;
      }
      iVar4 = FUN_01d3a5a0();
      uVar8 = extraout_XMM0_Da_00;
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        uVar8 = FUN_00d50b20();
      }
    } while (iVar4 != 5);
    FUN_01be8270();
    FUN_01be8270();
    FUN_00d50b00();
    FUN_01e437f0(uVar10);
    (**(code **)(*local_40 + 0x928))();
    if (this_ptr != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if ((local_c0 != '\0') && (local_c8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    goto LAB_004b357d;
  }
  FUN_01be4ec0();
  if ((local_38 == '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b00();
  }
  lVar1 = this_ptr[0x27];
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  FUN_01bef350((uVar6 & 2) >> 1,(uVar5 & 4) >> 2,1);
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  plVar7 = this_ptr + 0x27;
  plVar2 = (int64_t *)*plVar7;
  if ((g_02700970 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
    g_026d78f8 = FUN_0006e710();
    g_026d78e0 = "MDAudioTrackItem";
    g_026d78e8 = 0x70;
    g_026d78f0 = FUN_0006e6c0;
    g_026d7900 = 0;
    ram_00000000026d7908 = 0;
    g_026d7910 = 0;
    g_026d7988 = 0;
    ram_00000000026d7990 = 0;
    g_026d7998 = 0;
    g_026d799a = 1;
    g_026d7918 = 0;
    ram_00000000026d7920 = 0;
    g_026d7928 = 0;
    ram_00000000026d7930 = 0;
    g_026d7938 = 0;
    ram_00000000026d7940 = 0;
    g_026d7948 = 0;
    ram_00000000026d7950 = 0;
    g_026d7958 = 0;
    ram_00000000026d7960 = 0;
    g_026d7968 = 0;
    ram_00000000026d7970 = 0;
    g_026d7978 = 0;
    ram_00000000026d7980 = 0;
    g_026d79a3 = 0;
    g_026d799b = 0;
    ___cxa_guard_release();
  }
  if (plVar2 == (int64_t *)0x0) {
LAB_004b319c:
    plVar7 = &g_02802688;
  }
  else {
    (**(code **)(*plVar2 + 0x360))();
    cVar3 = FUN_00e85ea0();
    if (cVar3 == '\0') goto LAB_004b319c;
  }
  if (*plVar7 != 0) {
    FUN_00d50b00();
    FUN_00075b90();
    if (local_40 != (int64_t *)0x0) {
      if (local_38 == '\0') {
        FUN_00d50b00();
      }
      FUN_002ecd30();
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  if (local_40 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
LAB_004b357d:
  if (local_40 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  return;
}

