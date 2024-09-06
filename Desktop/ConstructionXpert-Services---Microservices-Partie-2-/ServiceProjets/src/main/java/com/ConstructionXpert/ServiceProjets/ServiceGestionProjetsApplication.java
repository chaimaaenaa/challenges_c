package com.ConstructionXpert.ServiceProjets;

import org.springframework.boot.SpringApplication;
import org.springframework.boot.autoconfigure.SpringBootApplication;
import org.springframework.cloud.client.discovery.EnableDiscoveryClient;
import org.springframework.cloud.openfeign.EnableFeignClients;

@EnableDiscoveryClient
@SpringBootApplication
public class ServiceGestionProjetsApplication {

	public static void main(String[] args) {
		SpringApplication.run(ServiceGestionProjetsApplication.class, args);
	}

}