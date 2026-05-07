// Function: FUN_01de5000
// Address: 01de5000
// Size: 1006 bytes
// Class: GNDictionary

uint64_t FUN_01de5000(char param_1)

{
  float fVar1;
  float fVar2;
  bool bVar3;
  int iVar4;
  int64_t *this_ptr;
  int64_t *plVar5;
  int64_t *plVar6;
  int iVar7;
  uint64_t uVar8;
  float fVar9;
  int64_t *local_88;
  char local_80;
  int64_t *local_40;
  char local_38;
  
  iVar4 = FUN_01d3a5a0();
  if (iVar4 == 1) {
    FUN_01d3abf0();
    uVar8 = FUN_01e466c0();
    FUN_01d4ed90(g_02421250,g_02390124);
    if ((local_38 == '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b00();
    }
    FUN_01d52700();
    FUN_01d52740();
    fVar9 = (float)uVar8 + g_023b5560;
    (**(code **)(*local_40 + 0x370))
              ((uint)fVar9 ^ g_023945e0,
               (uint)((float)((uint64_t)uVar8 >> 0x20) + _UNK_023b5564) ^ g_023945e0);
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    FUN_01d52740();
    if (local_38 == '\0') {
      if (local_40 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    (**(code **)(*this_ptr + 0x610))(fVar9,g_02421250);
    if (local_40 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    FUN_01d52770();
    iVar4 = 0;
    do {
      iVar7 = 0;
      do {
        FUN_01d530d0(iVar7,iVar4);
        if ((local_38 == '\0') && (local_40 != (int64_t *)0x0)) {
          FUN_00d50b00();
        }
        fVar9 = *(float *)(local_40 + 2);
        fVar1 = *(float *)((int64_t)local_40 + 0x14);
        fVar2 = *(float *)(local_40 + 3);
        (**(code **)(*this_ptr + 0x970))();
        if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        plVar5 = local_40;
        if (local_40 == (int64_t *)0x0) {
          (**(code **)(*this_ptr + 0x640))();
          (**(code **)(*local_88 + 0x470))();
          plVar5 = (int64_t *)0x0;
          if ((local_80 != '\0') && (local_88 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
        plVar6 = plVar5;
        if (param_1 != '\0') {
          FUN_01dce800();
          if (local_40 == plVar5) {
LAB_01de5324:
            plVar6 = plVar5;
            if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
          }
          else {
            plVar6 = local_40;
            if (local_38 == '\0') {
              if (local_40 != (int64_t *)0x0) {
                FUN_00d50b00();
              }
              if (plVar5 != (int64_t *)0x0) {
                FUN_00d50b20();
                plVar5 = local_40;
                goto LAB_01de5324;
              }
            }
            else if (plVar5 != (int64_t *)0x0) {
              FUN_00d50b20();
            }
          }
        }
        if (((g_02421228 < (float)((uint)(fVar9 - *(float *)(plVar6 + 2)) & g_02390140)) ||
            (g_02421228 <
             (float)((uint)(fVar1 - *(float *)((int64_t)plVar6 + 0x14)) & g_02390140))) ||
           (g_02421228 < (float)((uint)(fVar2 - *(float *)(plVar6 + 3)) & g_02390140))) {
          FUN_00d50b20();
          bVar3 = false;
          goto LAB_01de53d7;
        }
        FUN_00d50b20();
        iVar7 = iVar7 + 1;
      } while (iVar7 != 4);
      iVar4 = iVar4 + 1;
    } while (iVar4 != 4);
    bVar3 = true;
LAB_01de53d7:
    if (local_40 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if (!bVar3) {
      return 1;
    }
  }
  return 0;
}

