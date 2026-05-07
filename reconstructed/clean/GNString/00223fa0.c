// Function: FUN_00223fa0
// Address: 00223fa0
// Size: 3159 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


void FUN_00223fa0(void* param_1)

{
  int64_t lVar1;
  char cVar2;
  void *pvVar3;
  int64_t *plVar4;
  int64_t **pplVar5;
  int64_t this_ptr;
  int64_t **pplVar6;
  int64_t *plVar7;
  int64_t *local_e8;
  char local_e0;
  int64_t *local_d8;
  char local_d0;
  int64_t local_c8;
  char local_c0;
  int64_t local_b8;
  char local_b0;
  int64_t *local_88;
  char local_80;
  int64_t *local_78;
  char local_70;
  int64_t *local_68;
  char local_60;
  int64_t *local_58;
  char local_50 [8];
  int64_t *local_48;
  char local_40;
  
  if (*(int64_t *)(this_ptr + 0xa0) != 0) {
    FUN_00248780();
    FUN_01b7c2a0();
    if (*(int64_t **)(this_ptr + 0x90) != (int64_t *)0x0) {
      (**(code **)(&UNK_00001550 + **(int64_t **)(this_ptr + 0x90)))();
      plVar7 = local_58;
      local_48 = (int64_t *)CONCAT71(local_48._1_7_,local_50[0]);
      pplVar5 = &local_48;
      if (local_50[0] != '\0') {
        pplVar5 = (int64_t **)local_50;
      }
      *(char *)pplVar5 = '\0';
      if ((local_50[0] != '\0') && (local_58 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar7 == (int64_t *)0x0) {
        plVar7 = *(int64_t **)(this_ptr + 0x90);
        if (plVar7 != (int64_t *)0x0) goto LAB_0022404a;
      }
      else {
        if ((char)local_48 == '\0') {
LAB_0022404a:
          FUN_00d50b00();
        }
        if (plVar7 != (int64_t *)0x0) {
          plVar7 = *(int64_t **)(this_ptr + 0x90);
          (**(code **)(&UNK_00001550 + *plVar7))();
          plVar4 = local_58;
          local_68._0_1_ = local_50[0];
          pplVar5 = &local_68;
          if (local_50[0] != '\0') {
            pplVar5 = (int64_t **)local_50;
          }
          *(char *)pplVar5 = '\0';
          if ((local_50[0] != '\0') && (plVar4 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if (plVar4 == (int64_t *)0x0) {
            plVar4 = *(int64_t **)(this_ptr + 0x90);
LAB_002240c1:
            FUN_00d50b00();
          }
          else if ((char)local_68 == '\0') goto LAB_002240c1;
          (**(code **)(*plVar4 + 0xa00))();
          plVar4 = local_48;
          if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if (plVar7 != (int64_t *)0x0) {
            FUN_00d50b20();
          }
          FUN_00d50b20();
          if (plVar4 != (int64_t *)0x0) {
            plVar7 = *(int64_t **)(this_ptr + 0x90);
            (**(code **)(&UNK_00001550 + *plVar7))();
            plVar4 = local_58;
            pplVar5 = &local_88;
            pplVar6 = (int64_t **)local_50;
            if (local_50[0] == '\0') {
              pplVar6 = pplVar5;
            }
            local_88._0_1_ = local_50[0];
            *(char *)pplVar6 = '\0';
            if ((local_50[0] != '\0') && (plVar4 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            param_1 = (void*)pplVar5;
            if (plVar4 == (int64_t *)0x0) {
              plVar4 = *(int64_t **)(this_ptr + 0x90);
LAB_00224174:
              FUN_00d50b00();
            }
            else if ((char)local_88 == '\0') goto LAB_00224174;
            (**(code **)(*plVar4 + 0xa00))();
            pvVar3 = _pthread_getspecific(param_1);
            if (pvVar3 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_012cade0();
            pvVar3 = _pthread_getspecific(param_1);
            if (pvVar3 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_015058d0();
            plVar4 = local_48;
            if (local_40 == '\0') {
              if (local_48 != (int64_t *)0x0) {
                FUN_00d50b00();
              }
            }
            else {
              local_40 = '\0';
            }
            FUN_01a70ac0();
            if (plVar4 != (int64_t *)0x0) {
              FUN_00d50b20();
            }
            if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            if ((local_60 != '\0') && (CONCAT71(local_68._1_7_,(char)local_68) != 0)) {
              FUN_00d50b20();
            }
            if ((local_70 != '\0') && (CONCAT71(local_78._1_7_,(char)local_78) != 0)) {
              FUN_00d50b20();
            }
            if (plVar7 != (int64_t *)0x0) {
              FUN_00d50b20();
            }
          }
        }
      }
    }
  }
  if (*(int64_t *)(this_ptr + 0xa8) != 0) {
    FUN_00248dc0();
    FUN_01b7c2a0();
    if (*(int64_t **)(this_ptr + 0x90) != (int64_t *)0x0) {
      (**(code **)(&UNK_00001550 + **(int64_t **)(this_ptr + 0x90)))();
      plVar7 = local_58;
      local_48 = (int64_t *)CONCAT71(local_48._1_7_,local_50[0]);
      pplVar5 = &local_48;
      if (local_50[0] != '\0') {
        pplVar5 = (int64_t **)local_50;
      }
      *(char *)pplVar5 = '\0';
      if ((local_50[0] != '\0') && (local_58 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar7 == (int64_t *)0x0) {
        plVar7 = *(int64_t **)(this_ptr + 0x90);
        if (plVar7 != (int64_t *)0x0) goto LAB_00224352;
      }
      else {
        if ((char)local_48 == '\0') {
LAB_00224352:
          FUN_00d50b00();
        }
        if (plVar7 != (int64_t *)0x0) {
          plVar7 = *(int64_t **)(this_ptr + 0x90);
          (**(code **)(&UNK_00001550 + *plVar7))();
          plVar4 = local_58;
          local_68._0_1_ = local_50[0];
          pplVar5 = &local_68;
          if (local_50[0] != '\0') {
            pplVar5 = (int64_t **)local_50;
          }
          *(char *)pplVar5 = '\0';
          if ((local_50[0] != '\0') && (plVar4 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if (plVar4 == (int64_t *)0x0) {
            plVar4 = *(int64_t **)(this_ptr + 0x90);
LAB_002243c9:
            FUN_00d50b00();
          }
          else if ((char)local_68 == '\0') goto LAB_002243c9;
          (**(code **)(*plVar4 + 0xa00))();
          plVar4 = local_48;
          if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if (plVar7 != (int64_t *)0x0) {
            FUN_00d50b20();
          }
          FUN_00d50b20();
          if (plVar4 != (int64_t *)0x0) {
            plVar7 = *(int64_t **)(this_ptr + 0x90);
            (**(code **)(&UNK_00001550 + *plVar7))();
            plVar4 = local_58;
            pplVar5 = &local_88;
            pplVar6 = (int64_t **)local_50;
            if (local_50[0] == '\0') {
              pplVar6 = pplVar5;
            }
            local_88._0_1_ = local_50[0];
            *(char *)pplVar6 = '\0';
            if ((local_50[0] != '\0') && (plVar4 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            param_1 = (void*)pplVar5;
            if (plVar4 == (int64_t *)0x0) {
              plVar4 = *(int64_t **)(this_ptr + 0x90);
LAB_0022447c:
              FUN_00d50b00();
            }
            else if ((char)local_88 == '\0') goto LAB_0022447c;
            (**(code **)(*plVar4 + 0xa00))();
            pvVar3 = _pthread_getspecific(param_1);
            if (pvVar3 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_012cade0();
            pvVar3 = _pthread_getspecific(param_1);
            if (pvVar3 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_015058d0();
            plVar4 = local_48;
            if (local_40 == '\0') {
              if (local_48 != (int64_t *)0x0) {
                FUN_00d50b00();
              }
            }
            else {
              local_40 = '\0';
            }
            FUN_01b926b0();
            if (plVar4 != (int64_t *)0x0) {
              FUN_00d50b20();
            }
            if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            if ((local_60 != '\0') && (CONCAT71(local_68._1_7_,(char)local_68) != 0)) {
              FUN_00d50b20();
            }
            if ((local_70 != '\0') && (CONCAT71(local_78._1_7_,(char)local_78) != 0)) {
              FUN_00d50b20();
            }
            if (plVar7 != (int64_t *)0x0) {
              FUN_00d50b20();
            }
          }
        }
      }
    }
  }
  if (*(int64_t **)(this_ptr + 0x90) != (int64_t *)0x0) {
    (**(code **)(&UNK_00001550 + **(int64_t **)(this_ptr + 0x90)))();
    plVar7 = local_58;
    local_48 = (int64_t *)CONCAT71(local_48._1_7_,local_50[0]);
    pplVar5 = &local_48;
    if (local_50[0] != '\0') {
      pplVar5 = (int64_t **)local_50;
    }
    *(char *)pplVar5 = '\0';
    if ((local_50[0] != '\0') && (local_58 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar7 == (int64_t *)0x0) {
      plVar7 = *(int64_t **)(this_ptr + 0x90);
      if (plVar7 != (int64_t *)0x0) goto LAB_00224637;
    }
    else {
      if ((char)local_48 == '\0') {
LAB_00224637:
        FUN_00d50b00();
      }
      if (plVar7 != (int64_t *)0x0) {
        plVar7 = *(int64_t **)(this_ptr + 0x90);
        (**(code **)(&UNK_00001550 + *plVar7))();
        plVar4 = local_58;
        local_68._0_1_ = local_50[0];
        pplVar5 = &local_68;
        if (local_50[0] != '\0') {
          pplVar5 = (int64_t **)local_50;
        }
        *(char *)pplVar5 = '\0';
        if ((local_50[0] != '\0') && (plVar4 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if (plVar4 == (int64_t *)0x0) {
          plVar4 = *(int64_t **)(this_ptr + 0x90);
LAB_002246ae:
          FUN_00d50b00();
        }
        else if ((char)local_68 == '\0') goto LAB_002246ae;
        (**(code **)(*plVar4 + 0x970))();
        plVar4 = local_48;
        if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if (plVar7 != (int64_t *)0x0) {
          FUN_00d50b20();
        }
        FUN_00d50b20();
        if (plVar4 != (int64_t *)0x0) {
          plVar7 = *(int64_t **)(this_ptr + 0x90);
          (**(code **)(&UNK_00001550 + *plVar7))();
          plVar4 = local_58;
          pplVar5 = &local_78;
          pplVar6 = (int64_t **)local_50;
          if (local_50[0] == '\0') {
            pplVar6 = pplVar5;
          }
          local_78._0_1_ = local_50[0];
          *(char *)pplVar6 = '\0';
          if ((local_50[0] != '\0') && (plVar4 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          param_1 = (void*)pplVar5;
          if (plVar4 == (int64_t *)0x0) {
            plVar4 = *(int64_t **)(this_ptr + 0x90);
LAB_00224756:
            FUN_00d50b00();
          }
          else if ((char)local_78 == '\0') goto LAB_00224756;
          (**(code **)(*plVar4 + 0x970))();
          pplVar5 = &local_48;
          FUN_01d98320();
          plVar4 = local_48;
          FUN_00275460();
          if (plVar4 == (int64_t *)0x0) {
LAB_002247ad:
            pplVar5 = (int64_t **)&g_02802688;
          }
          else {
            (**(code **)(*plVar4 + 0x360))();
            cVar2 = FUN_00e85ea0();
            if (cVar2 == '\0') goto LAB_002247ad;
          }
          plVar4 = *pplVar5;
          if (*(char *)(pplVar5 + 1) == '\0') {
            if (plVar4 != (int64_t *)0x0) {
              FUN_00d50b00();
            }
          }
          else {
            *(void*)(pplVar5 + 1) = 0;
          }
          if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_60 != '\0') && (CONCAT71(local_68._1_7_,(char)local_68) != 0)) {
            FUN_00d50b20();
          }
          if (plVar7 != (int64_t *)0x0) {
            FUN_00d50b20();
          }
          if (plVar4 != (int64_t *)0x0) {
            FUN_00249410();
            FUN_01b15090();
            FUN_00248dc0();
            FUN_01b150d0();
            FUN_00d50b20();
          }
        }
      }
    }
  }
  if (*(int64_t *)(this_ptr + 0x98) == 0) {
    return;
  }
  FUN_00d50b00();
  FUN_00d50b20();
  if (*(int64_t *)(this_ptr + 0x1c0) == 0) {
    local_50[0] = '\0';
    local_58 = (int64_t *)0x0;
  }
  else {
    FUN_006f3f00();
    if (local_58 != (int64_t *)0x0) {
      if (*(int64_t *)(this_ptr + 0x1c0) == 0) {
        local_40 = '\0';
        local_48 = (int64_t *)0x0;
      }
      else {
        FUN_006f3f00();
      }
      cVar2 = FUN_00751ba0();
      if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      goto LAB_002248cc;
    }
  }
  cVar2 = '\0';
LAB_002248cc:
  if ((local_50[0] != '\0') && (local_58 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (cVar2 != '\0') {
    FUN_006f3f00();
    (**(code **)(*(int64_t *)CONCAT71(local_68._1_7_,(char)local_68) + 0x628))();
    pvVar3 = _pthread_getspecific(param_1);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_004a11a0();
    if (local_58 == (int64_t *)0x0) {
      cVar2 = '\0';
    }
    else {
      FUN_006f3f00();
      (**(code **)(*local_e8 + 0x628))();
      pvVar3 = _pthread_getspecific(param_1);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_004a11a0();
      pvVar3 = _pthread_getspecific(param_1);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      cVar2 = FUN_0170f810();
      if (cVar2 == '\0') {
        cVar2 = '\0';
      }
      else {
        FUN_006f3f00();
        (**(code **)(*local_d8 + 0x628))();
        pvVar3 = _pthread_getspecific(param_1);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_004a11a0();
        pvVar3 = _pthread_getspecific(param_1);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        cVar2 = FUN_01710590();
        if ((local_c0 != '\0') && (local_c8 != 0)) {
          FUN_00d50b20();
        }
        if ((local_b0 != '\0') && (local_b8 != 0)) {
          FUN_00d50b20();
        }
        if ((local_d0 != '\0') && (local_d8 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      if ((local_70 != '\0') && (CONCAT71(local_78._1_7_,(char)local_78) != 0)) {
        FUN_00d50b20();
      }
      if ((local_80 != '\0') && (CONCAT71(local_88._1_7_,(char)local_88) != 0)) {
        FUN_00d50b20();
      }
      if ((local_e0 != '\0') && (local_e8 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    if ((local_50[0] != '\0') && (local_58 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_60 != '\0') && (CONCAT71(local_68._1_7_,(char)local_68) != 0)) {
      FUN_00d50b20();
    }
    lVar1 = *(int64_t *)(this_ptr + 0x98);
    if (cVar2 == '\0') {
      if (lVar1 != 0) {
        FUN_00d50b00();
      }
      FUN_01c78b00();
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
    }
    else {
      if (lVar1 != 0) {
        FUN_00d50b00();
      }
      FUN_01c78b00();
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
    }
  }
  return;
}

