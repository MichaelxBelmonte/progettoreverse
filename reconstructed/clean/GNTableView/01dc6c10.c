// Function: FUN_01dc6c10
// Address: 01dc6c10
// Size: 1911 bytes
// Class: GNTableView
// === GNTableView properties ===
//   GNTableViewDropFeedback _dropFeedback
//                   _mouseTrackingValueRowIndex
//                   _mouseTrackingValueColumnIndex
//                   _mouseTrackingPrototype
//                   _focusedRowIndex
//                   _didGetMouseDownFromCell
//                   _postSelectionTimer
//                   _postSelectionRow
//                   _columns


int64_t * FUN_01dc6c10(uint64_t param_1,int param_2)

{
  int64_t lVar1;
  bool bVar2;
  bool bVar3;
  int64_t lVar4;
  int64_t *plVar5;
  void*puVar6;
  int64_t *plVar7;
  int64_t *arg1;
  int64_t *this_ptr;
  int iVar8;
  bool bVar9;
  int64_t local_78;
  char local_70;
  int64_t *local_40;
  char local_38;
  
  plVar5 = local_40;
  lVar4 = g_027f27a8;
  lVar1 = g_027f27a0;
  if ((char)arg1[0x29] == '\0') {
    if (param_2 == 1) {
      if (g_027f27a8 != 0) {
        FUN_00d50b00();
      }
      FUN_01d51a40();
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
    }
    else if (param_2 == 0) {
      if (g_027f27a0 != 0) {
        FUN_00d50b00();
      }
      FUN_01d51a40();
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
    }
    else {
      *(void*)(this_ptr + 1) = 0;
      *this_ptr = 0;
    }
  }
  else {
    if ((g_028b8a68 == (void*)0x0) || (g_028b8a71 == '\0')) {
      FUN_00e8cb50();
      if (g_028b8a68 == (void*)0x0) {
        puVar6 = (void*)FUN_00e8fc40();
        FUN_00d4ff40();
        *puVar6 = &g_02572358;
        (*g_02572370)();
        if (g_028b8a68 == puVar6) {
          bVar3 = false;
          bVar2 = false;
        }
        else {
          bVar3 = true;
          bVar2 = true;
          bVar9 = g_028b8a68 != (void*)0x0;
          g_028b8a68 = puVar6;
          if (bVar9) {
            FUN_00d50b20();
          }
        }
        if (g_028b8a70 == '\0') {
          g_028b8a70 = '\x01';
          FUN_00e8cb90();
          bVar2 = bVar3;
        }
        if (!bVar2) {
          FUN_00d50b20();
        }
        (**(code **)(*arg1 + 0x640))();
        if ((local_38 == '\0') && (local_40 != (int64_t *)0x0)) {
          FUN_00d50b00();
        }
        iVar8 = 0;
        do {
          plVar7 = (int64_t *)FUN_00e8fc40();
          FUN_00152930();
          (**(code **)(*plVar7 + 0x18))();
          FUN_01d4eaa0(g_0241f410);
          FUN_01d52700();
          FUN_01d52740();
          FUN_01d48b40(g_02390124);
          if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          FUN_01d52740();
          (**(code **)(*plVar5 + 0x390))();
          if (local_70 == '\0') {
            if (local_78 != 0) {
              FUN_00d50b00();
            }
          }
          else {
            local_70 = '\0';
          }
          FUN_01d488d0();
          if (local_78 != 0) {
            FUN_00d50b20();
          }
          if ((local_70 != '\0') && (local_78 != 0)) {
            FUN_00d50b20();
          }
          if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if (iVar8 == 0) {
            FUN_01d52740();
            (**(code **)(*local_40 + 0x3e0))(g_02390d34,g_02390d34,g_023b36b0,g_02390d34);
            if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            FUN_01d52740();
            (**(code **)(*local_40 + 0x3e0))(g_02390d34,g_02390d2c,g_02390d30,g_02390d2c);
            if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            FUN_01d52740();
            (**(code **)(*local_40 + 0x3e0))(g_02390d34,g_02390d30,g_023908ec,g_02390d30);
            if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            FUN_01d52740();
            (**(code **)(*local_40 + 0x3e0))(g_02390d34,g_023b36b0,g_02390d2c,g_023b36b0);
            if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
          }
          else if (iVar8 == 1) {
            FUN_01d52740();
            (**(code **)(*local_40 + 0x3e0))(g_02390d34,g_02390d34,g_02390d2c,g_02390d34);
            if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            FUN_01d52740();
            (**(code **)(*local_40 + 0x3e0))(g_02390d34,g_02390d2c,g_02390d30,g_02390d2c);
            if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            FUN_01d52740();
            (**(code **)(*local_40 + 0x3e0))(g_02390d34,g_02390d30,g_023b36b0,g_02390d30);
            if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            FUN_01d52740();
            (**(code **)(*local_40 + 0x3e0))(g_02390d34,g_023b36b0,g_023908ec,g_023b36b0);
            if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
          }
          else if (iVar8 == 2) {
            FUN_01d52740();
            (**(code **)(*local_40 + 0x3e0))(g_02390d34,g_02390d34,g_023908ec,g_02390d34);
            if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            FUN_01d52740();
            (**(code **)(*local_40 + 0x3e0))(g_02390d34,g_02390d2c,g_023b36b0,g_02390d2c);
            if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            FUN_01d52740();
            (**(code **)(*local_40 + 0x3e0))(g_02390d34,g_02390d30,g_02390d30,g_02390d30);
            if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            FUN_01d52740();
            (**(code **)(*local_40 + 0x3e0))(g_02390d34,g_023b36b0,g_02390d2c,g_023b36b0);
            if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
          }
          FUN_01d52770();
          local_38 = '\0';
          FUN_00d21140();
          FUN_00d50b20();
          iVar8 = iVar8 + 1;
          local_40 = plVar7;
        } while (iVar8 != 3);
        FUN_00d50b20();
        g_028b8a71 = '\x01';
        FUN_00e8cb70();
      }
      else {
        g_028b8a71 = '\x01';
        FUN_00e8cb70();
      }
    }
    if ((param_2 < -1) || (*(int *)((int64_t)g_028b8a68 + 0xc) <= (int)(param_2 + 1U))) {
      *(void*)(this_ptr + 1) = 0;
      *this_ptr = 0;
    }
    else {
      lVar1 = *(int64_t *)(g_028b8a68[2] + (uint64_t)(param_2 + 1U) * 8);
      *(void*)(this_ptr + 1) = 0;
      if (lVar1 != 0) {
        FUN_00d50b00();
      }
      *this_ptr = lVar1;
      *(void*)(this_ptr + 1) = 1;
    }
  }
  return this_ptr;
}

