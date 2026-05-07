// Function: FUN_00e21c70
// Address: 00e21c70
// Size: 1646 bytes
// Class: GNFileType
// String references:
//   "expected ':' after key '%@' in object"

void FUN_00e21c70(void)

{
  short sVar1;
  bool bVar2;
  int64_t lVar3;
  int64_t lVar4;
  void*puVar5;
  char cVar6;
  int64_t *plVar7;
  int64_t *plVar8;
  int64_t arg1;
  void*this_ptr;
  bool bVar9;
  int64_t local_70;
  char local_68;
  void*local_50;
  char local_48;
  
  cVar6 = FUN_00e20b20();
  lVar3 = g_02785a60;
  if (cVar6 == '\0') {
    if (g_02785a60 != 0) {
      FUN_00d50b00();
    }
    FUN_00e20940();
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
  }
  else if (*(short *)(*(int64_t *)(arg1 + 0x20) + (int64_t)*(int *)(arg1 + 0x30) * 2) ==
           0x7b) {
    *(int *)(arg1 + 0x30) = *(int *)(arg1 + 0x30) + 1;
    cVar6 = FUN_00e20b20();
    lVar3 = g_02785a68;
    if (cVar6 != '\0') {
      if (*(short *)(*(int64_t *)(arg1 + 0x20) + (int64_t)*(int *)(arg1 + 0x30) * 2) ==
          0x7d) {
        *(int *)(arg1 + 0x30) = *(int *)(arg1 + 0x30) + 1;
        plVar7 = (int64_t *)FUN_00e8fc40();
        FUN_00022d50();
        (**(code **)(*plVar7 + 0x18))();
        *this_ptr = plVar7;
        *(void*)(this_ptr + 1) = 1;
        return;
      }
      plVar7 = (int64_t *)FUN_00e8fc40();
      FUN_00022d50();
      (**(code **)(*plVar7 + 0x18))();
      bVar9 = false;
      while( true ) {
        puVar5 = local_50;
        cVar6 = FUN_00e20b20();
        lVar3 = g_02785a70;
        if (cVar6 == '\0') {
          if (g_02785a70 != 0) {
            FUN_00d50b00();
          }
          FUN_00e20940();
          if (lVar3 != 0) {
            FUN_00d50b20();
          }
          goto LAB_00e222bc;
        }
        if (*(short *)(*(int64_t *)(arg1 + 0x20) + (int64_t)*(int *)(arg1 + 0x30) * 2)
            == 0x7d) break;
        FUN_00e21390();
        if (local_48 == '\0') {
          if (local_50 == (void*)0x0) goto LAB_00e222bc;
          FUN_00d50b00();
        }
        else if (local_50 == (void*)0x0) goto LAB_00e222bc;
        cVar6 = FUN_00e20b20();
        lVar3 = g_02785a78;
        if (cVar6 == '\0') {
          if (g_02785a78 != 0) {
            FUN_00d50b00();
          }
          FUN_00e20940();
          bVar9 = true;
          bVar2 = true;
          if (lVar3 != 0) {
            FUN_00d50b20();
          }
        }
        else if (*(short *)(*(int64_t *)(arg1 + 0x20) +
                           (int64_t)*(int *)(arg1 + 0x30) * 2) == 0x3a) {
          *(int *)(arg1 + 0x30) = *(int *)(arg1 + 0x30) + 1;
          cVar6 = FUN_00e20b20();
          lVar3 = g_02785a80;
          if (cVar6 == '\0') {
            if (g_02785a80 != 0) {
              FUN_00d50b00();
            }
            FUN_00e20940();
            bVar9 = true;
            bVar2 = true;
            if (lVar3 != 0) {
              FUN_00d50b20();
            }
          }
          else {
            FUN_00e20d30();
            if (local_48 == '\0') {
              if (local_50 != (void*)0x0) {
                FUN_00d50b00();
                goto LAB_00e21ee1;
              }
              if (*(int64_t *)(arg1 + 0x10) != 0) goto LAB_00e22067;
LAB_00e22114:
              if (*(char *)(arg1 + 0xd) != '\0') {
                FUN_00ca1170();
              }
              if (*(char *)(arg1 + 0xe) == '\0') {
                local_48 = '\0';
                FUN_00ca0840();
              }
LAB_00e2217b:
              cVar6 = FUN_00e20b20();
              lVar4 = g_02785a88;
              lVar3 = g_02785a68;
              if (cVar6 == '\0') {
                if (g_02785a68 != 0) {
                  FUN_00d50b00();
                }
                FUN_00e20940();
                bVar2 = true;
                bVar9 = true;
                if (lVar3 != 0) {
                  FUN_00d50b20();
                }
              }
              else {
                sVar1 = *(short *)(*(int64_t *)(arg1 + 0x20) +
                                  (int64_t)*(int *)(arg1 + 0x30) * 2);
                bVar2 = false;
                if (sVar1 != 0x7d) {
                  if (sVar1 == 0x2c) {
                    *(int *)(arg1 + 0x30) = *(int *)(arg1 + 0x30) + 1;
                  }
                  else {
                    if (g_02785a88 != 0) {
                      FUN_00d50b00();
                    }
                    FUN_00e20940();
                    bVar2 = true;
                    bVar9 = true;
                    if (lVar4 != 0) {
                      FUN_00d50b20();
                    }
                  }
                }
              }
            }
            else {
LAB_00e21ee1:
              if (*(int64_t *)(arg1 + 0x10) == 0) {
                if (local_50 == (void*)0x0) goto LAB_00e22114;
                local_48 = '\0';
                FUN_00ca0840();
                goto LAB_00e2217b;
              }
              bVar2 = true;
              bVar9 = true;
            }
            if (local_50 != (void*)0x0) {
              FUN_00d50b20();
            }
          }
        }
        else {
          local_48 = '\x01';
          FUN_00d50b00();
          FUN_00d8cb40();
          if (local_68 == '\0') {
            if (local_70 != 0) {
              FUN_00d50b00();
            }
          }
          else {
            local_68 = '\0';
          }
          FUN_00e20940();
          if (local_70 != 0) {
            FUN_00d50b20();
          }
          if ((local_68 != '\0') && (local_70 != 0)) {
            FUN_00d50b20();
          }
          local_50 = &g_024c5048;
          if (puVar5 != (void*)0x0) {
            FUN_00d50b20();
          }
LAB_00e22067:
          bVar9 = true;
          bVar2 = true;
        }
        FUN_00d50b20();
        if (((bVar2) || (*(int *)(arg1 + 0x34) <= *(int *)(arg1 + 0x30))) || (bVar9))
        goto LAB_00e2229f;
      }
      *(int *)(arg1 + 0x30) = *(int *)(arg1 + 0x30) + 1;
LAB_00e2229f:
      if (bVar9) {
LAB_00e222bc:
        plVar8 = (int64_t *)0x0;
      }
      else {
        plVar8 = (int64_t *)0x0;
        if (plVar7 != (int64_t *)0x0) {
          FUN_00d50b00();
          plVar8 = plVar7;
        }
      }
      *this_ptr = plVar8;
      *(void*)(this_ptr + 1) = 1;
      if (plVar7 == (int64_t *)0x0) {
        return;
      }
      FUN_00d50b20();
      return;
    }
    if (g_02785a68 != 0) {
      FUN_00d50b00();
    }
    FUN_00e20940();
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
  }
  else {
    if (g_02785a60 != 0) {
      FUN_00d50b00();
    }
    FUN_00e20940();
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
  }
  *(void*)(this_ptr + 1) = 0;
  *this_ptr = 0;
  return;
}

