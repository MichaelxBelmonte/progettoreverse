// Function: FUN_01de5000
// Address: 01de5000
// Size: 1006 bytes
// Class: GNDictionary


/* WARNING: Removing unreachable block (ram,0x01de51fd) */
/* WARNING: Removing unreachable block (ram,0x01de5220) */
/* WARNING: Removing unreachable block (ram,0x01de5225) */
/* WARNING: Removing unreachable block (ram,0x01de522d) */
/* WARNING: Removing unreachable block (ram,0x01de5203) */
/* WARNING: Removing unreachable block (ram,0x01de507c) */
/* WARNING: Removing unreachable block (ram,0x01de5085) */
/* WARNING: Removing unreachable block (ram,0x01de51b1) */
/* WARNING: Removing unreachable block (ram,0x01de51ba) */
/* WARNING: Removing unreachable block (ram,0x01de527d) */
/* WARNING: Removing unreachable block (ram,0x01de528e) */
/* WARNING: Removing unreachable block (ram,0x01de529c) */
/* WARNING: Removing unreachable block (ram,0x01de52a5) */
/* WARNING: Removing unreachable block (ram,0x01de5283) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_01de5000(char param_1)

{
  float fVar1;
  float fVar2;
  bool bVar3;
  int iVar4;
  longlong *unaff_RDI;
  longlong *plVar5;
  longlong *plVar6;
  int iVar7;
  undefined8 uVar8;
  float fVar9;
  longlong *local_88;
  char local_80;
  longlong *local_40;
  char local_38;
  
  iVar4 = FUN_01d3a5a0();
  if (iVar4 == 1) {
    FUN_01d3abf0();
    uVar8 = FUN_01e466c0();
    FUN_01d4ed90(_DAT_02421250,DAT_02390124);
    if ((local_38 == '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b00();
    }
    FUN_01d52700();
    FUN_01d52740();
    fVar9 = (float)uVar8 + _DAT_023b5560;
    (**(code **)(*local_40 + 0x370))
              ((uint)fVar9 ^ _DAT_023945e0,
               (uint)((float)((ulonglong)uVar8 >> 0x20) + _UNK_023b5564) ^ _DAT_023945e0);
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    FUN_01d52740();
    if (local_38 == '\0') {
      if (local_40 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    (**(code **)(*unaff_RDI + 0x610))(fVar9,_DAT_02421250);
    if (local_40 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    FUN_01d52770();
    iVar4 = 0;
    do {
      iVar7 = 0;
      do {
        FUN_01d530d0(iVar7,iVar4);
        if ((local_38 == '\0') && (local_40 != (longlong *)0x0)) {
          FUN_00d50b00();
        }
        fVar9 = *(float *)(local_40 + 2);
        fVar1 = *(float *)((longlong)local_40 + 0x14);
        fVar2 = *(float *)(local_40 + 3);
        (**(code **)(*unaff_RDI + 0x970))();
        if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        plVar5 = local_40;
        if (local_40 == (longlong *)0x0) {
          (**(code **)(*unaff_RDI + 0x640))();
          (**(code **)(*local_88 + 0x470))();
          plVar5 = (longlong *)0x0;
          if ((local_80 != '\0') && (local_88 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
        plVar6 = plVar5;
        if (param_1 != '\0') {
          FUN_01dce800();
          if (local_40 == plVar5) {
LAB_01de5324:
            plVar6 = plVar5;
            if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
          }
          else {
            plVar6 = local_40;
            if (local_38 == '\0') {
              if (local_40 != (longlong *)0x0) {
                FUN_00d50b00();
              }
              if (plVar5 != (longlong *)0x0) {
                FUN_00d50b20();
                plVar5 = local_40;
                goto LAB_01de5324;
              }
            }
            else if (plVar5 != (longlong *)0x0) {
              FUN_00d50b20();
            }
          }
        }
        if (((DAT_02421228 < (float)((uint)(fVar9 - *(float *)(plVar6 + 2)) & _DAT_02390140)) ||
            (DAT_02421228 <
             (float)((uint)(fVar1 - *(float *)((longlong)plVar6 + 0x14)) & _DAT_02390140))) ||
           (DAT_02421228 < (float)((uint)(fVar2 - *(float *)(plVar6 + 3)) & _DAT_02390140))) {
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
    if (local_40 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    if (!bVar3) {
      return 1;
    }
  }
  return 0;
}


