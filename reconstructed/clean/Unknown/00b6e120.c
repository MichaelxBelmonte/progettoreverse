// Function: FUN_00b6e120
// Address: 00b6e120
// Size: 533 bytes
// Class: Unknown

void FUN_00b6e120(uint64_t param_1,int64_t *param_2)

{
  uint8_t uVar1;
  uint64_t uVar2;
  int64_t *plVar3;
  uint *this_ptr;
  uint uVar4;
  uint *puVar5;
  double dVar6;
  uint8_t auVar7 [16];
  uint8_t auVar8 [16];
  int64_t local_88;
  char local_80;
  double local_78;
  
  FUN_00da71a0();
  if (*this_ptr != 0) {
    puVar5 = this_ptr + 1;
    uVar4 = 0;
    do {
      if ((*(char *)((int64_t)puVar5 + 10) == -0x10) || (param_2[6] != 0)) {
        if (*(int64_t *)puVar5 == 0) {
          dVar6 = 0.0;
        }
        else {
          uVar2 = _AudioConvertHostTimeToNanos();
          auVar8._8_4_ = (int)((uint64_t)uVar2 >> 0x20);
          auVar8._0_8_ = uVar2;
          auVar8._12_4_ = _UNK_023e16c4;
          dVar6 = ((auVar8._8_8_ - _UNK_023e16d8) +
                  ((double)CONCAT44(g_023e16c0,(int)uVar2) - g_023e16d0)) / g_023e1690;
        }
        FUN_00b6e3d0(dVar6,(short)puVar5[2]);
      }
      else if (((*(char *)((int64_t)param_2 + 0x4a) == '\0') && ((short)puVar5[2] == 1)) &&
              (*(char *)((int64_t)puVar5 + 10) == -2)) {
        *(void*)((int64_t)param_2 + 0x4c) = 1;
      }
      else {
        if (*(int64_t *)puVar5 == 0) {
          local_78 = 0.0;
        }
        else {
          uVar2 = _AudioConvertHostTimeToNanos();
          auVar7._8_4_ = (int)((uint64_t)uVar2 >> 0x20);
          auVar7._0_8_ = uVar2;
          auVar7._12_4_ = _UNK_023e16c4;
          local_78 = ((auVar7._8_8_ - _UNK_023e16d8) +
                     ((double)CONCAT44(g_023e16c0,(int)uVar2) - g_023e16d0)) / g_023e1690;
        }
        plVar3 = (int64_t *)FUN_007af310();
        (**(code **)(*plVar3 + 0x18))();
        FUN_00b5ae60(local_78);
        uVar2 = FUN_00b5bff0();
        FUN_00b5b210(uVar2,(short)puVar5[2]);
        FUN_00b5c030();
        FUN_00b5b3a0();
        if ((local_80 != '\0') && (local_88 != 0)) {
          FUN_00d50b20();
        }
        *(void*)((int64_t)param_2 + 0x4c) = 1;
        (**(code **)(*param_2 + 0x378))();
        uVar1 = FUN_00b5bec0();
        *(void*)((int64_t)param_2 + 0x2a) = uVar1;
        FUN_00d50b20();
      }
      puVar5 = (uint *)((int64_t)puVar5 + (uint64_t)(ushort)puVar5[2] + 10);
      uVar4 = uVar4 + 1;
    } while (uVar4 < *this_ptr);
  }
  FUN_00da71b0();
  return;
}

