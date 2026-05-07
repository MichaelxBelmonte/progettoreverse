// Function: FUN_00d8f4b0
// Address: 00d8f4b0
// Size: 1599 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


void* FUN_00d8f4b0(int param_1,uint32_t param_2)

{
  int64_t lVar1;
  int iVar2;
  void*puVar3;
  bool bVar4;
  void*arg1;
  void*this_ptr;
  void*puVar5;
  
  iVar2 = *(int *)(arg1 + 4);
  if (iVar2 == -1) {
    if (arg1[2] != 0) {
      iVar2 = FUN_00e7dde0();
      goto joined_r0x00d8f4ef;
    }
  }
  else {
joined_r0x00d8f4ef:
    if (iVar2 != 0) {
      puVar5 = arg1;
      switch(param_2) {
      case 1:
        FUN_00d50b00();
LAB_00d8f540:
        iVar2 = *(int *)(puVar5 + 4);
        if (iVar2 == -1) {
          if (puVar5[2] != 0) {
            iVar2 = FUN_00e7dde0();
            goto LAB_00d8f557;
          }
          if (-1 < param_1) goto LAB_00d8fac1;
        }
        else {
LAB_00d8f557:
          if (iVar2 <= param_1) goto LAB_00d8fac1;
        }
        if (puVar5 == arg1) {
          puVar3 = (void*)FUN_00e8fc40();
          FUN_00d4ff40();
          *puVar3 = &g_025795a8;
          FUN_00d500e0();
          if (puVar3 == puVar5) {
            FUN_00d50b20();
          }
          else {
            FUN_00d50b20();
            puVar5 = puVar3;
          }
          FUN_00d50b00();
          if (((void*)puVar5[2] != (void*)0x0) &&
             ((void*)puVar5[2] != puVar5 + 5)) {
            FUN_00e83070();
          }
          puVar5[2] = 0;
          if (*(int *)(puVar5 + 4) != -1) {
            FUN_00e83070();
            puVar5[3] = 0;
            *(void*)(puVar5 + 4) = 0xffffffff;
          }
          FUN_00d8dbf0();
          FUN_00d50b20();
          FUN_00e7b4e0();
          lVar1 = g_0272fa48;
          if (g_0272fa48 != 0) {
            FUN_00d50b00();
          }
          FUN_00d8e100();
          if (lVar1 != 0) {
            FUN_00d50b20();
          }
        }
        else {
          FUN_00e7b4e0();
          lVar1 = g_028a8368;
          if (g_028a8368 != 0) {
            FUN_00d50b00();
          }
          FUN_00d8e100();
          if (lVar1 != 0) {
            FUN_00d50b20();
          }
        }
        goto LAB_00d8f540;
      case 2:
        FUN_00d50b00();
        do {
          bVar4 = true;
LAB_00d8f6f0:
          iVar2 = *(int *)(puVar5 + 4);
          if (iVar2 == -1) {
            if (puVar5[2] != 0) {
              iVar2 = FUN_00e7dde0();
              goto LAB_00d8f707;
            }
            if (-1 < param_1) goto LAB_00d8fac1;
          }
          else {
LAB_00d8f707:
            if (iVar2 <= param_1) goto LAB_00d8fac1;
          }
          if (puVar5 != arg1) {
            if (bVar4) {
              FUN_00e7b4e0();
              lVar1 = g_028a8368;
              if (g_028a8368 != 0) {
                FUN_00d50b00();
              }
              FUN_00d8e100();
              bVar4 = false;
              if (lVar1 != 0) {
                bVar4 = false;
                FUN_00d50b20();
              }
            }
            else {
              FUN_00e7b4e0();
              lVar1 = g_028a8368;
              if (g_028a8368 != 0) {
                FUN_00d50b00();
              }
              FUN_00d8e100();
              bVar4 = true;
              if (lVar1 != 0) {
                FUN_00d50b20();
              }
            }
            goto LAB_00d8f6f0;
          }
          puVar3 = (void*)FUN_00e8fc40();
          FUN_00d4ff40();
          *puVar3 = &g_025795a8;
          FUN_00d500e0();
          if (puVar3 == puVar5) {
            FUN_00d50b20();
          }
          else {
            FUN_00d50b20();
            puVar5 = puVar3;
          }
          FUN_00d50b00();
          if (((void*)puVar5[2] != (void*)0x0) &&
             ((void*)puVar5[2] != puVar5 + 5)) {
            FUN_00e83070();
          }
          puVar5[2] = 0;
          if (*(int *)(puVar5 + 4) != -1) {
            FUN_00e83070();
            puVar5[3] = 0;
            *(void*)(puVar5 + 4) = 0xffffffff;
          }
          FUN_00d8dbf0();
          FUN_00d50b20();
          if ((*(int *)(puVar5 + 4) == -1) && (puVar5[2] != 0)) {
            FUN_00e7dde0();
          }
          FUN_00e7b4e0();
          lVar1 = g_0272fa48;
          if (g_0272fa48 != 0) {
            FUN_00d50b00();
          }
          FUN_00d8e100();
          if (lVar1 != 0) {
            FUN_00d50b20();
          }
        } while( true );
      case 3:
        FUN_00d50b00();
LAB_00d8f930:
        iVar2 = *(int *)(puVar5 + 4);
        if (iVar2 == -1) {
          if (puVar5[2] != 0) {
            iVar2 = FUN_00e7dde0();
            goto LAB_00d8f94b;
          }
          if (-1 < param_1) goto LAB_00d8fac1;
        }
        else {
LAB_00d8f94b:
          if (iVar2 <= param_1) goto LAB_00d8fac1;
        }
        if (puVar5 == arg1) {
          puVar3 = (void*)FUN_00e8fc40();
          FUN_00d4ff40();
          *puVar3 = &g_025795a8;
          FUN_00d500e0();
          if (puVar3 == puVar5) {
            FUN_00d50b20();
          }
          else {
            FUN_00d50b20();
            puVar5 = puVar3;
          }
          FUN_00d50b00();
          if (((void*)puVar5[2] != (void*)0x0) &&
             ((void*)puVar5[2] != puVar5 + 5)) {
            FUN_00e83070();
          }
          puVar5[2] = 0;
          if (*(int *)(puVar5 + 4) != -1) {
            FUN_00e83070();
            puVar5[3] = 0;
            *(void*)(puVar5 + 4) = 0xffffffff;
          }
          FUN_00d8dbf0();
          FUN_00d50b20();
          if ((*(int *)(puVar5 + 4) == -1) && (puVar5[2] != 0)) {
            FUN_00e7dde0();
          }
          FUN_00e7b4e0();
          lVar1 = g_0272fa48;
          if (g_0272fa48 != 0) {
            FUN_00d50b00();
          }
          FUN_00d8e100();
          if (lVar1 != 0) {
            FUN_00d50b20();
          }
        }
        else {
          FUN_00e7b4e0();
          lVar1 = g_028a8368;
          if (g_028a8368 != 0) {
            FUN_00d50b00();
          }
          FUN_00d8e100();
          if (lVar1 != 0) {
            FUN_00d50b20();
          }
        }
        goto LAB_00d8f930;
      }
    }
  }
  *(void*)(this_ptr + 1) = 0;
  FUN_00d50b00();
  *this_ptr = arg1;
LAB_00d8fad6:
  *(void*)(this_ptr + 1) = 1;
  return this_ptr;
LAB_00d8fac1:
  if (puVar5 != arg1) {
    *(byte *)((int64_t)puVar5 + 0x24) = *(byte *)((int64_t)puVar5 + 0x24) & 0xfe;
  }
  *this_ptr = puVar5;
  goto LAB_00d8fad6;
}

