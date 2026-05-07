// Function: FUN_00b6e120
// Address: 00b6e120
// Size: 533 bytes
// Class: Unknown


/* WARNING: Removing unreachable block (ram,0x00b6e2a7) */
/* WARNING: Removing unreachable block (ram,0x00b6e2b0) */
/* WARNING: Removing unreachable block (ram,0x00b6e2f7) */
/* WARNING: Removing unreachable block (ram,0x00b6e300) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00b6e120(undefined8 param_1,longlong *param_2)

{
  undefined1 uVar1;
  undefined8 uVar2;
  longlong *plVar3;
  uint *unaff_RDI;
  uint uVar4;
  uint *puVar5;
  double dVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  longlong local_88;
  char local_80;
  double local_78;
  
  FUN_00da71a0();
  if (*unaff_RDI != 0) {
    puVar5 = unaff_RDI + 1;
    uVar4 = 0;
    do {
      if ((*(char *)((longlong)puVar5 + 10) == -0x10) || (param_2[6] != 0)) {
        if (*(longlong *)puVar5 == 0) {
          dVar6 = 0.0;
        }
        else {
          uVar2 = _AudioConvertHostTimeToNanos();
          auVar8._8_4_ = (int)((ulonglong)uVar2 >> 0x20);
          auVar8._0_8_ = uVar2;
          auVar8._12_4_ = _UNK_023e16c4;
          dVar6 = ((auVar8._8_8_ - _UNK_023e16d8) +
                  ((double)CONCAT44(_DAT_023e16c0,(int)uVar2) - _DAT_023e16d0)) / _DAT_023e1690;
        }
        FUN_00b6e3d0(dVar6,(short)puVar5[2]);
      }
      else if (((*(char *)((longlong)param_2 + 0x4a) == '\0') && ((short)puVar5[2] == 1)) &&
              (*(char *)((longlong)puVar5 + 10) == -2)) {
        *(undefined1 *)((longlong)param_2 + 0x4c) = 1;
      }
      else {
        if (*(longlong *)puVar5 == 0) {
          local_78 = 0.0;
        }
        else {
          uVar2 = _AudioConvertHostTimeToNanos();
          auVar7._8_4_ = (int)((ulonglong)uVar2 >> 0x20);
          auVar7._0_8_ = uVar2;
          auVar7._12_4_ = _UNK_023e16c4;
          local_78 = ((auVar7._8_8_ - _UNK_023e16d8) +
                     ((double)CONCAT44(_DAT_023e16c0,(int)uVar2) - _DAT_023e16d0)) / _DAT_023e1690;
        }
        plVar3 = (longlong *)FUN_007af310();
        (**(code **)(*plVar3 + 0x18))();
        FUN_00b5ae60(local_78);
        uVar2 = FUN_00b5bff0();
        FUN_00b5b210(uVar2,(short)puVar5[2]);
        FUN_00b5c030();
        FUN_00b5b3a0();
        if ((local_80 != '\0') && (local_88 != 0)) {
          FUN_00d50b20();
        }
        *(undefined1 *)((longlong)param_2 + 0x4c) = 1;
        (**(code **)(*param_2 + 0x378))();
        uVar1 = FUN_00b5bec0();
        *(undefined1 *)((longlong)param_2 + 0x2a) = uVar1;
        FUN_00d50b20();
      }
      puVar5 = (uint *)((longlong)puVar5 + (ulonglong)(ushort)puVar5[2] + 10);
      uVar4 = uVar4 + 1;
    } while (uVar4 < *unaff_RDI);
  }
  FUN_00da71b0();
  return;
}


